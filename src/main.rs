use clang::EntityKind::*;
use clang::*;

fn main() {
    // Acquire an instance of `Clang`
    let clang = Clang::new().unwrap();

    // Create a new `Index`
    let index = Index::new(&clang, false, false);

    let r_home_osstr = std::env::var_os("R_HOME").expect("R_HOME is not set!");
    let r_home = r_home_osstr.to_str().expect("R_HOME is not valid UTF-8");

    // Parse a source file into a translation unit
    let tu = index
        .parser("wrapper.h")
        .arguments(&[format!("-I{r_home}/include")])
        .parse()
        .unwrap();

    // Get the structs in this translation unit
    let e = tu
        .get_entity()
        .get_children()
        .into_iter()
        .filter(|e| match e.get_location() {
            Some(l) => match l.get_file_location().file {
                Some(f) => {
                    let p = f.get_path();
                    p.to_string_lossy().contains(r_home)
                }
                None => false,
            },
            None => false,
        })
        .collect::<Vec<_>>();

    for e in e {
        match e.get_kind() {
            EnumDecl | FunctionDecl | StructDecl | TypedefDecl | VarDecl => {
                if let Some(n) = e.get_name() {
                    println!("{n}");
                }
            }
            ek => panic!("Unknown kind: {ek:?}"),
        }
    }
}

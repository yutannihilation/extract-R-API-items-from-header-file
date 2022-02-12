use clang::EntityKind::*;
use clang::*;
use regex::Regex;
use std::collections::HashSet;
use std::io::{self, BufRead};

// This extract the items from include files in twos steps.
// First, extract it using clang-rs. But, as this flatten the
// #define macro, we need to extract macro constants (e.g. `#define FOO 1`)
// and macro functions (e.g. `#define FOO(x) (x + 1)`) by ourselves.
// Bindgen handles these things nicely, but I cannot understand how to do it...

fn main() -> std::io::Result<()> {
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

    let mut include_files = HashSet::new();

    let e = tu
        .get_entity()
        .get_children()
        .into_iter()
        .filter(|e| match e.get_location() {
            Some(l) => match l.get_file_location().file {
                Some(f) => {
                    let p = f.get_path();

                    if p.to_string_lossy().contains(r_home) {
                        include_files.insert(p);
                        true
                    } else {
                        false
                    }
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

    // case 1) numeric literals
    //
    //     #define FOO 1
    //
    // case 2) string literals
    //
    //     #define FOO "foo"
    //
    // case 3) inline function
    //
    //     #define FOO(x) (x + 1)
    //
    let re = Regex::new(r#"^\s*#\s*define\s+([^\s\(]+)(\s*\(|\s+[0-9"])"#).unwrap();

    for include_file in include_files {
        let file = std::fs::File::open(include_file)?;
        for line in io::BufReader::new(file).lines() {
            if let Some(cap) = re.captures(line?.as_str()) {
                println!("{}", &cap[1]);
            }
        }
    }

    Ok(())
}

# extract-R-API-items-from-header-file

``` pwsh
# Assuming I'm on bash of Rtools40
export PATH="/ucrt64/bin/:${PATH}"

# Expand macros
gcc -E -I"${R_HOME}/include" main.c > main_expanded.c

# Tweak
awk -f tweak.awk main_expanded.c > main_expanded2.c
```
# extract-R-API-items-from-header-file

## 1-a. Extracted objects by clang (and some regex-fu)

``` pwsh
# Make sure llvm-config is on path.
# 
# e.g. $env:PATH = "C:\msys64\mingw64\bin;${env:PATH}"

cargo +stable-gnu run > dump.txt
```

## 2. "Non-API"

Should these items be hided? But, we actually need some of them on embedded usages.

``` pwsh
Rscript -e "writeLines(tools:::nonAPI)" > nonAPI.txt
```

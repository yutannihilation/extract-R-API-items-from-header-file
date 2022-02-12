# extract-R-API-items-from-header-file

``` pwsh
# make sure llvm-config is on path
$env:PATH = "C:\msys64\mingw64\bin;${env:PATH}"

cargo +stable-gnu run > dump.txt
```
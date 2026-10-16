# CSCI 111 Fall 2026

## Excel occupied-cell counter

`excelCounter` reads an Excel `.xlsx` workbook and counts cells containing a
value or formula. Formatting-only cells are not counted. The program reports a
count for each worksheet and a workbook total. Older binary `.xls` files are
not supported.

### Build on Windows

Install CMake and [vcpkg](https://learn.microsoft.com/vcpkg/), then install
`xlnt`:

```powershell
vcpkg install xlnt:x64-windows
```

Configure and build from the repository directory, replacing the toolchain path
if vcpkg is installed elsewhere:

```powershell
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT\scripts\buildsystems\vcpkg.cmake"
cmake --build build --config Release
```

Run it with the path to an `.xlsx` workbook:

```powershell
.\build\Release\excelCounter.exe "C:\path\to\workbook.xlsx"
```

The workbook path can also be supplied without quotes when it contains no
spaces. Running the program without a workbook path prints a usage message.

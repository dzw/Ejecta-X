#D:\Python38\Scripts\cmake-converter.exe --solution=project\windows\Ejecta-X.sln


SET PATH="D:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin";%PATH%

SET PATH="C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin";%PATH%

cmake ^
 -S .\project\windows ^
 -B .\project\cwindows ^
 -DCMAKE_BUILD_TYPE=Debug ^
 -G "Visual Studio 16 2019" ^
 -A Win32

pause
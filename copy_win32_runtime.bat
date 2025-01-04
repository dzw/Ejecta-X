SET PRJ_ROOT=%~dp0

MD %PRJ_ROOT%project\windows\Debug\files\build\shaders\

copy %PRJ_ROOT%sources\ejecta\EJCanvas\2D\Shaders\*.* %PRJ_ROOT%project\windows\Debug\files\build\shaders\
copy %PRJ_ROOT%library\win32\libraries\*.dll          %PRJ_ROOT%project\windows\Debug\
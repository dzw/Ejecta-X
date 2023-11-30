SET PATH=D:\NDK;%PATH%

cd project\android\jni

call ndk-build.cmd

cd %~dp0

if not exist project\android\assets\www\shaders md project\android\assets\www\shaders

copy sources\ejecta\EJCanvas\2D\Shaders\*.* project\android\assets\www\shaders\

pause
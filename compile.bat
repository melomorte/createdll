gcc -c -DBUILD_DLL dll.c -o out.o
gcc -shared -o mydll.dll out.o -Wl, --out-implib,my.a
del out.o
gcc exe.c -my.exe my.a
pause
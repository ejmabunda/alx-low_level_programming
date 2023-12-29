# 0x09. C - Static libraries
This project explores libraries in C. A library is a collection of multiple object files that can be used as a single entity.
## Creating a Static C library using `ar` and ranlib
To create a static C library you need object files, and the name of the static library you want to create. Like this:
```
gcc -c *.c
ar rc lib_name.a obj_file1.o obj_file2.o obj_file3.o
```
This will create a static library named `lib_name.a` that contains copies of the specified obj files in it. The `c` flag tells `ar` to create the library if it doesn´t exit, the `r` flag tells it to replace older object files the new object files.
### Indexing an archive:
```
ranlib lib_name.a
```
## Using a C library in a program
```
cc main.o -L. -lutil -o prog
```
# C Dynamic libraries
This project is about dynamic libraries, which is 'a collection of files that contain separate pieces of object code dynamically linked to form a single piece of object code', according to [David Cero Restrepo](https://www.linkedin.com/pulse/creating-using-dynamic-libraries-c-jhojan-david-cera-restrepo).

## How to create the dynamic library
1. Create the object files with `gcc -fPIC -c *.c`.
2. Create the library with `gcc -shared -o libname.so *.o`.
3. Finally, run `nm -D libname.so` to verify.

## Tasks
1. `libdynamic.so` - a dynamic library containing functions.

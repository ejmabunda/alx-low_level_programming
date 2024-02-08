# File IO
This project explores file handling in C, in one of two ways:
- Stream-oriented data files - stored in the same manner as it appears on the screen
- System-oriented data files - closely associted with the Operating System

## Steps for file processing
1. Declare a file pointer
2. Open a file `fopen()`
3. Process the file
4. Close the file `fclose()`

### File processing functions
- `fopen` - open a file
- `fclose` - close a file
- `getc` - read a parameter from a file
- `putc` - write a character to a file
- `getw`- read int from a file
- `putw` - write int to a file
- `fprintf` - print formatted output to a file
- `fscanf` - read formatted input from a file
- `fgets` - read string of chars from a file
- `fputs` - write string of chars to a file
- `feof` - detect `EOF` in a file

## Tasks
1. `0-read_textfile.c` - reads a text file and prints to the `POSIX` standard output.
2. `1-create_file.c` - creates a file
3. `2-append_text_to_file.c` - appends text to the end of a file.

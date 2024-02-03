# 0x0A. C - argc, argv
This project explores command-line arguments, `argc` and `argv`.
- `argc` is the number of command-line arguments including the program's name.
- `argv` is an array containing command-line arguments, and the program's name.

## How to use
Simply include `argc` and `argv` as arguments for your function, then access them by indexing, like so:
```
void function(int argc, char *argv[])
{
	char *program_name = argv[0];
	int number_of_arguments = argc - 1;
}
```
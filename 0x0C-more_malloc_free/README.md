# 0x0C. C - More malloc, free

This project is a continuation of 0x0B, further exploring dynamic memory allocation with calloc and realloc.

- `calloc` allocates multiple blocks of memory, taking two arguments instead of one. The first being the number of blocks to allocate, the second being the size of each block.
- `realloc` is used to change the size of allocated memory.
- `exit` function used terminate from anywhere in the code, with `0` and `EXIT_SUCCESS` arguments signaling success, `1` and `EXIT_FAILURE` signaling failure.

## Now to use
- `int *ptr = (int *)calloc(4, sizeof(int))`
- `ptr = (int *)realloc(ptr, 5*sizeof(int))`
- `exit(0)` on success, `exit(1)` otherwise

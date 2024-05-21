#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>

/* Searches for a value in an array of integers using Linear Search */
int linear_search(int *array, size_t size, int value);

/* Searches for a value in an array of integers using binary search */
int binary_search(int *array, size_t size, int value);

/* Searches for a value in an array of integers using binary search */
int binary_search_helper(int *array, size_t left, size_t right, int value, size_t size);

/* Prints an array */
void print_array(int *array, size_t left, size_t right);

#endif

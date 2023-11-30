# 0x10. C - Variadic functions
This project explores variadic functions, functions that accept an indefinite number of arguments.
## How to use:
1. Include the `stdarg` header file
2. Include at least one named argument before an ellipsis, `int f(int a, ...)`
3. Declare a `va_list` variable which will store the arguments.
4. Call the `va_start` function with the `va_list` and the last named parameter of the function.
5. `va_arg(va_list_variable, type_of_next_var)` yeilds the next argument.
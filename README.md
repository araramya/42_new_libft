# libft

## Description  
`libft` is a custom C library that replicates standard C library functions while adding additional utilities. This project is part of the School 42 curriculum, designed to strengthen understanding of fundamental C programming concepts such as memory allocation, string manipulation, and data structures.  

## Features  
- Reimplementation of standard C library functions  
- Additional utility functions for string and memory manipulation  
- Modular and reusable codebase  

## Installation  
1. Clone the repository:  
   ```sh
   git clone https://github.com/your-username/libft.git
2. Run Make command
    ```sh
    make

## Developer Notes
The following functions have been implemented in this project:

### ft_isalpha
The `ft_isalpha` function checks whether a given character or all characters in a string are alphabetic (i.e., letters from A-Z or a-z).

### ft_isdigit
The `ft_isdigit` function checks whether a given character or all characters in a string are numeric digits (0-9).

### ft_isalnum
The `ft_isalnum` is a function that checks whether a given character is alphanumeric, meaning it is either a letter (A-Z or a-z) or a digit (0-9).

### ft_isascii 
The `ft_isascii` function checks whether a given character is part of the ASCII character set, which includes values in the range 0 to 127 (7-bit ASCII).

### ft_isprint
The `ft_isprint` function checks whether a given character is printable, meaning it is part of the ASCII printable characters (values 32 to 126).

### ft_strlen
The `ft_strlen` function is used to determine the length of a string, excluding the null terminator ('\0'), which marks the end of a string in C.

### ft_memset
The `ft_memset` function, writes `n` bytes of value `c` to the string `s`.
The `ft_memset` function sets the first `n` bytes of the memory area pointed to by `s` to the value `c`. It then returns the original pointer `s`. The function is useful for initializing or clearing memory.
For example, calling `ft_memset(arr, 0, 10)` would set the first `10` bytes of `arr` to zero.

### ft_bzero
The `ft_bzero` function sets the first `n` bytes of memory, pointed to by `s`, to `0` using the `ft_memset` function.

### ft_memcpy
The `ft_memcpy` function copies `n` bytes from the memory area `src` to the memory area `dest`. It performs the copying byte by byte and checks for NULL pointers to avoid undefined behavior. The function returns the `dest` pointer after the copy is completed.

### ft_memmove
TODO




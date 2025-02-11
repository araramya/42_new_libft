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
The `ft_memmove` function copies `n` bytes from the memory area `src` to the memory area `dst`. It performs the copying byte by byte and checks for NULL pointers to avoid undefined behavior. The function returns the `dst` pointer after the copy is completed.

### ft_strlcpy

The `ft_strlcpy` function copies up to `dstsize - 1` characters from the string `src` to the memory area `dst`, ensuring that the destination is null-terminated. It performs the copying byte by byte and checks for NULL pointers to avoid undefined behavior. The function returns the total length of the string it tried to create, which is the length of `src`. If the destination size is smaller than the source string, it guarantees that the destination is null-terminated. The function returns the `dst` pointer after the copy is completed.

### ft_strlcat

The `ft_strlcat` function appends up to `dstsize - strlen(dst) - 1` characters from the string `src` to the string `dst`, ensuring that the destination is null-terminated. It performs the copying byte by byte and checks for NULL pointers to avoid undefined behavior. The function returns the total length of the string it tried to create, which is the length of `dst` plus the length of `src`. If the destination size is smaller than needed, it guarantees that the result is null-terminated. The function returns the `dst` pointer after the copy is completed.

### ft_toupper

The `ft_toupper` function converts a lowercase letter from the string `c` to its uppercase equivalent. If `c` is not a lowercase letter, it returns `c` unchanged. The function checks for invalid inputs to avoid undefined behavior and ensures that it works within the ASCII range. The function returns the uppercase character corresponding to `c`.

### ft_tolower

The `ft_tolower` function converts an uppercase letter from the string `c` to its lowercase equivalent. If `c` is not an uppercase letter, it returns `c` unchanged. The function checks for invalid inputs to avoid undefined behavior and ensures that it works within the ASCII range. The function returns the lowercase character corresponding to `c`.

### ft_strchr

The `ft_strchr` function searches for the first occurrence of the character `c` in the string `s`. It returns a pointer to the located character or `NULL` if the character is not found. The function checks for NULL pointers to avoid undefined behavior. It returns a pointer to the first occurrence of `c` in `s` or `NULL` if `c` is not present.

### ft_strrchr

The `ft_strrchr` function searches for the last occurrence of the character `c` in the string `s`. It returns a pointer to the located character or `NULL` if the character is not found. The function checks for NULL pointers to avoid undefined behavior. It returns a pointer to the last occurrence of `c` in `s` or `NULL` if `c` is not present.

### ft_strncmp

The `ft_strncmp` function compares the first `n` characters of the strings `s1` and `s2`. It returns a positive value if `s1` is greater than `s2`, a negative value if `s1` is smaller than `s2`, or 0 if both strings are equal. The function checks for NULL pointers to avoid undefined behavior. The function returns an integer result based on the comparison of the two strings.

### ft_memchr

The `ft_memchr` function searches for the first occurrence of the byte `c` in the memory area `s`, up to `n` bytes. It returns a pointer to the located byte or `NULL` if the byte is not found. The function checks for NULL pointers to avoid undefined behavior. It returns a pointer to the first occurrence of `c` in `s` or `NULL` if `c` is not present.

### ft_memcmp

The `ft_memcmp` function compares the first `n` bytes of the memory areas `s1` and `s2`. It returns a positive value if `s1` is greater than `s2`, a negative value if `s1` is smaller than `s2`, or 0 if both memory areas are equal. The function checks for NULL pointers to avoid undefined behavior. The function returns an integer result based on the comparison of the two memory areas.

### ft_strnstr

The `ft_strnstr` function locates the first occurrence of the substring `needle` in the string `haystack`, within the first `len` bytes. It returns a pointer to the beginning of the located substring or `NULL` if the substring is not found. The function checks for NULL pointers to avoid undefined behavior. It returns a pointer to the first occurrence of `needle` in `haystack` within the first `len` bytes or `NULL` if not found.

### ft_atoi

The `ft_atoi` function converts the initial portion of the string `str` to an integer. It skips any leading whitespace characters and processes the digits in the string, returning the corresponding integer value. If no valid digits are found, the function returns 0. The function also handles optional signs (`+` or `-`) and ensures that the conversion is done safely, preventing overflow or underflow. The function returns the resulting integer.

### ft_calloc

The `ft_calloc` function allocates memory for an array of `n` elements, each of size `size`, and initializes all bytes of the allocated memory to zero. It checks for memory allocation failures and returns `NULL` if the allocation fails. The function returns a pointer to the allocated memory, which can be used for further processing.

### ft_strdup

The `ft_strdup` function creates a new string by duplicating the string `s`. It allocates memory for the new string and copies the contents of `s` into the allocated memory. The function checks for memory allocation failures and returns `NULL` if the allocation fails. The function returns a pointer to the newly allocated string, which is a copy of `s`.
### ft_substr

The `ft_substr` function allocates (with `malloc(3)`) and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`. If the allocation fails, the function returns `NULL`. It performs boundary checks to ensure that the start index and length are valid, and it returns the newly created substring.

### ft_strjoin

The `ft_strjoin` function allocates (with `malloc(3)`) and returns a new string, which is the result of the concatenation of `s1` and `s2`. If the allocation fails, the function returns `NULL`. It appends `s2` to `s1` and ensures that the result is null-terminated.

### ft_strtrim

The `ft_strtrim` function allocates (with `malloc(3)`) and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string. If the allocation fails, the function returns `NULL`. It trims the `set` characters and ensures that the result is a valid string.

### ft_split

The `ft_split` function allocates (with `malloc(3)`) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must end with a `NULL` pointer. If the allocation fails, the function returns `NULL`. The function processes the input string and divides it into substrings based on the delimiter.

### ft_itoa

The `ft_itoa` function allocates (with `malloc(3)`) and returns a string representing the integer `n`. Negative numbers are handled appropriately. If the allocation fails, the function returns `NULL`. The function converts the integer into its string representation.

### ft_strmapi

The `ft_strmapi` function applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (using `malloc(3)`) to collect the results from the successive applications of `f`. If the allocation fails, the function returns `NULL`. It returns a newly created string resulting from applying the function `f`.

### ft_striteri

The `ft_striteri` function applies the function `f` on each character of the string `s`, passing its index as the first argument. Each character is passed by address to `f` to be modified if necessary. The function does not return any value. No memory allocation is performed in this function.

### ft_putchar_fd

The `ft_putchar_fd` function outputs the character `c` to the given file descriptor `fd`. It uses the `write` function to perform the output. The function does not return any value.

### ft_putstr_fd

The `ft_putstr_fd` function outputs the string `s` to the given file descriptor `fd`. It uses the `write` function to perform the output. The function does not return any value.

### ft_putendl_fd

The `ft_putendl_fd` function outputs the string `s` to the given file descriptor `fd`, followed by a newline. It uses the `write` function to perform the output. The function does not return any value.

### ft_putnbr_fd

The `ft_putnbr_fd` function outputs the integer `n` to the given file descriptor `fd`. It uses the `write` function to perform the output. The function does not return any value.

### ft_lstnew

The `ft_lstnew` function allocates (with `malloc(3)`) and returns a new node. The member variable `content` is initialized with the value of the parameter `content`, and the variable `next` is initialized to `NULL`. If the memory allocation fails, the function returns `NULL`.

### ft_lstadd_front

The `ft_lstadd_front` function adds the node `new` at the beginning of the list. It modifies the list by updating the pointer to the first node to point to the new node. The function does not return any value.

### ft_lstsize

The `ft_lstsize` function counts the number of nodes in a list, starting from the first node (`lst`). It returns the length of the list.

### ft_lstlast

The `ft_lstlast` function returns the last node of the list. It traverses the list from the beginning and returns the last node encountered.

### ft_lstadd_back

The `ft_lstadd_back` function adds the node `new` at the end of the list. It modifies the list by updating the pointer to the last node to point to the new node. The function does not return any value.

### ft_lstdelone

The `ft_lstdelone` function frees the memory of the node's content using the function `del` provided as a parameter. It also frees the node itself, but the memory of `next` is not freed. The function does not return any value.

### ft_lstclear

The `ft_lstclear` function deletes and frees the given node and every successor of that node, using the function `del` and `free(3)`. After deleting the nodes, the pointer to the list is set to `NULL`. The function does not return any value.

### ft_lstiter

The `ft_lstiter` function iterates the list `lst` and applies the function `f` on the content of each node. The function does not return any value.

### ft_lstmap

The `ft_lstmap` function iterates the list `lst` and applies the function `f` on the content of each node. It creates a new list resulting from the successive applications of the function `f`. If needed, the function `del` is used to delete the content of a node. If the memory allocation fails, the function returns `NULL`.

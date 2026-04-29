*This project has been created as part of the 42 curriculum by side-oli*

# Libft - Custom C Library

## Description
The **Libft** project is the first milestone of the 42 curriculum. Its goal is to re-code a subset of the standard C library (`libc`) and create additional utility functions. This project serves as a toolset that will be used throughout the entire course, providing a deep dive into memory management and pointer manipulation.

The core objective is to understand how these functions work under the hood by recreating them from scratch, ensuring they handle edge cases and memory allocation as reliably as the originals.

## Library Details
The library is composed of three distinct parts, each targeting a specific area of C programming:

### 1. Libc Functions
Standard functions re-implemented to mimic their original behavior (as described in their respective `man` pages):
- **Memory Management:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`.
- **String Manipulation:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`.
- **Character Checks:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`.
- **Conversions:** `toupper`, `tolower`, `atoi`.

### 2. Additional Functions
Utility functions that extend the standard library to simplify string and file descriptor operations:
- **String Transformations:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- **Conversions:** `ft_itoa`.
- **Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3. Bonus Functions (Linked Lists)
A suite of functions for managing dynamic data structures using singly linked lists:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Instructions

### Compilation
The project uses a `Makefile` to automate the build process. All functions are compiled into a static library file named `libft.a`.

- **Mandatory:** `make`
- **Clean objects:** `make clean`
- **Full Reset:** `make fclean`
- **Recompile:** `make re`

### Usage
To use this library in your C projects, include the header and link the `.a` file during compilation:
```c
#include "libft.h"
```
```bash
cc main.c -L. -lft
```

## Resources

### Documentation
- **Man Pages:** Used as the primary source for function behavior and return values.
- **Mentorship:** Consultation with senior programmers for low-level memory logic.
- **Technical Sites:** [cppreference.com](https://cppreference.com) and [tutorialspoint.com](https://tutorialspoint.com) for syntax reference.

### AI Usage Disclosure
AI was used as a strategic tool during the development of this project for the following tasks:
- **Logic Verification:** Used to debug edge cases in `ft_strlcat` and complex pointer updates in linked list functions (`ft_lstmap`).
- **Norm Compliance:** Assisted in refactoring functions to meet the 42 Norm (e.g., keeping functions under 25 lines).
- **Documentation:** Structural guidance for this README.md to ensure all curriculum requirements were met.

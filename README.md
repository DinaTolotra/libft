*This project has been created as part of the 42 curriculum by todina-r.*

# Libft

Custom C standard library implementation developed as part of the 42 curriculum.  
This project consolidates fundamental utilities, along with extended functionality including `ft_printf` and `get_next_line`.

---

## Overview

This library provides reimplementations of standard C functions, as well as additional tools for memory management, string manipulation, linked lists, formatted output, and file reading.

It is designed to:
- Reinforce understanding of low-level programming concepts
- Provide reusable, reliable utilities for future projects
- Respect strict coding standards (42 norm)

---

## Features

### 1. Standard C Library Functions
Reimplementation of commonly used libc functions:

- Character checks:  
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

- Case conversion:  
  `ft_tolower`, `ft_toupper`

- Memory management:  
  `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

- String manipulation:  
  `ft_strlen`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`

- Conversion:  
  `ft_atoi`, `ft_itoa`

---

### 2. Additional String Utilities

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

---

### 3. File Descriptor Output

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

### 4. Linked List API

Custom implementation of a singly linked list:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

### 5. ft_printf

Custom implementation of the standard `printf` function.

#### Supported conversions:
- `%c` — character  
- `%s` — string  
- `%p` — pointer  
- `%d`, `%i` — signed integers  
- `%u` — unsigned integers  
- `%x`, `%X` — hexadecimal  
- `%%` — percent sign  

#### Additional features:
- File descriptor support via `ft_dprintf`
- Modular internal printing functions

---

### 6. get_next_line

Function that reads a file descriptor line by line.

#### Prototype:
```c
char *get_next_line(int fd);
````

#### Behavior:

* Returns one line per call (including newline if present)
* Handles multiple file descriptors simultaneously
* Uses a configurable buffer size

#### Configuration:

```c
# define BUFFER_SIZE 42
# define FD_MAX 1024
```

---

## Installation

Clone the repository:

```bash
git clone https://github.com/your-username/libft.git
cd libft
```

Compile the library:

```bash
make
```

This generates:

```
libft.a
```

---

## Usage

Include the header in your project:

```c
#include "libft.h"
```

Compile with the library:

```bash
gcc main.c -L. -lft
```

---

## Makefile Rules

* `make` — compile the library
* `make clean` — remove object files
* `make fclean` — remove object files and library
* `make re` — rebuild everything

---

## Project Structure

```
libft/
├── ft_*.c
├── ft_printf/
├── gnl.c
├── libft.h
├── Makefile
└── README.md
```

---

## Constraints

* Written in C
* No use of standard libc functions (except allowed ones)
* Norm-compliant (42 coding standard)
* Memory-safe (no leaks, no undefined behavior)

---

## Notes

* `BUFFER_SIZE` must be greater than 0 (compile-time value reset)
* Supports multiple file descriptors up to `FD_MAX` (hard coded as macro)
* Designed for reuse across all future 42 projects

---

## Author

**todina-r**
42 Antananarivo

---

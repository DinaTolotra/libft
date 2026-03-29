*This project has been created as part of the 42 curriculum by todina-r.*

# Libft

---

## Introduction

`libft` is a custom implementation of the C standard library, extended with two key projects: `ft_printf` and `get_next_line`.

The objective of this project is to build a reliable, reusable foundation of low-level utilities while strengthening understanding of memory management, data structures, and system-level programming.

The library includes:
- Reimplemented standard libc functions
- Additional string and memory utilities
- A linked list API
- A custom formatted output system (`ft_printf`)
- A line-by-line file reader (`get_next_line`)

This library is intended to be reused across subsequent 42 projects.

---

## Instruction

### Compilation

```bash
make
````

This produces:

```
libft.a
```

### Cleaning

```bash
make clean     # remove object files
make fclean    # remove object files and library
make re        # rebuild
```

### Usage

Include the header:

```c
#include "libft.h"
```

Compile your program with:

```bash
gcc main.c -L. -lft
```

---

## Resource

### Project Structure

```
libft/
├── ft_printf/
├── ft_*.c
├── gnl.c
├── libft.h
├── Makefile
└── README.md
```

### Key Components

#### Libc Functions

Character checks, memory handling, string manipulation, and conversions.

#### Linked List API

Singly linked list utilities:
`ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`, etc.

#### ft_printf

Supports:

* `%c`, `%s`, `%p`
* `%d`, `%i`, `%u`
* `%x`, `%X`
* `%%`

Includes `ft_dprintf` for file descriptor output.

#### get_next_line

```c
char *get_next_line(int fd);
```

* Reads one line per call
* Supports multiple file descriptors
* Controlled via:

```c
# define BUFFER_SIZE 42
# define FD_MAX 1024
```

---

### AI Usage

This project was developed with limited assistance from AI tools.
AI was used for:

* Reviewing code quality and edge cases
* Improving documentation clarity

AI was not used to generate or copy implementation code directly. All logic and coding decisions were made and implemented by the project author.

---

## Author

**todina-r**
42 Antananarivo

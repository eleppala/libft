# libft

My implementation of the 42 libft project - a custom C library containing re-implementations of standard C library functions along with additional utility functions.

**Author:** eleppala (Hive Helsinki)

## About

This library was created as part of the 42 curriculum. It includes:
- Standard libc functions (re-implemented)
- Additional utility functions for string manipulation and memory management
- **ft_printf** - A custom implementation of printf
- **get_next_line** - A function to read lines from file descriptors

## Compilation

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

This will create `libft.a` static library file.

## Functions

### Character Functions
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_toupper` | Convert character to uppercase |
| `ft_tolower` | Convert character to lowercase |

### String Functions
| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculate the length of a string |
| `ft_strlcpy` | Copy string with size limit |
| `ft_strlcat` | Concatenate strings with size limit |
| `ft_strchr` | Locate first occurrence of character in string |
| `ft_strrchr` | Locate last occurrence of character in string |
| `ft_strncmp` | Compare two strings up to n characters |
| `ft_strnstr` | Locate substring in string with length limit |
| `ft_strdup` | Duplicate a string |
| `ft_substr` | Extract substring from string |
| `ft_strjoin` | Concatenate two strings into new string |
| `ft_strtrim` | Trim characters from beginning and end of string |
| `ft_split` | Split string by delimiter into array |
| `ft_strmapi` | Apply function to each character of string (returns new string) |
| `ft_striteri` | Apply function to each character of string (in place) |

### Memory Functions
| Function | Description |
|----------|-------------|
| `ft_memset` | Fill memory with constant byte |
| `ft_bzero` | Zero a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area (handles overlap) |
| `ft_memchr` | Scan memory for a character |
| `ft_memcmp` | Compare memory areas |
| `ft_calloc` | Allocate and zero memory |

### Conversion Functions
| Function | Description |
|----------|-------------|
| `ft_atoi` | Convert string to integer |
| `ft_itoa` | Convert integer to string |

### Output Functions
| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Output character to file descriptor |
| `ft_putstr_fd` | Output string to file descriptor |
| `ft_putendl_fd` | Output string with newline to file descriptor |
| `ft_putnbr_fd` | Output number to file descriptor |

### ft_printf
Custom implementation of printf supporting the following format specifiers:
| Specifier | Description |
|-----------|-------------|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer address |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%%` | Percent sign |

### get_next_line
Reads a line from a file descriptor, including the newline character (if present).

```c
char *get_next_line(int fd);
```

- Returns the next line from the file descriptor
- Returns `NULL` when EOF is reached or on error
- Default `BUFFER_SIZE` is 42 (can be changed at compile time)

## Project Structure

```
libft/
├── libft.h              # Main header file
├── Makefile             # Build configuration
├── original/            # Core libft functions
│   ├── ft_isalpha.c
│   ├── ft_isdigit.c
│   ├── ft_strlen.c
│   ├── ft_memset.c
│   ├── ... (34 files)
├── printf/              # ft_printf implementation
│   ├── ft_printf.c
│   └── functions_printf.c
└── gnl/                 # get_next_line implementation
    ├── get_next_line.c
    ├── get_next_line_utils.c
    └── get_next_line.h
```

## Usage

1. Compile the library:
```bash
make
```

2. Include the header in your C file:
```c
#include "libft.h"
```

3. Compile your program with the library:
```bash
cc your_program.c -L. -lft -o your_program
```

## Example

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    ft_printf("String: %s\n", str);
    ft_printf("Length: %d\n", ft_strlen(str));
    free(str);
    return (0);
}
```

*This activity has been created as part of the 42 curriculum by ndalqamo.*

# ft_printf

## Description

**ft_printf** is a custom reimplementation of the standard C `printf()` function.  
The goal of this project is to gain a deep understanding of **variadic functions**, **format string parsing**, and **low-level output handling** in C.

This project focuses on writing a clean, modular, and extensible implementation while respecting strict technical constraints and coding standards.

---

## Objectives

- Learn how variadic functions work in C
- Parse and interpret formatted strings
- Handle multiple data types dynamically
- Strengthen low-level programming skills
- Write maintainable and robust C code under constraints

---

## Supported Conversions

| Specifier | Description |
|---------|------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address in hexadecimal format |
| `%d` | Print a decimal number |
| `%i` | Print an integer |
| `%u` | Print an unsigned decimal number |
| `%x` | Print a hexadecimal number (lowercase) |
| `%X` | Print a hexadecimal number (uppercase) |
| `%%` | Print a percent sign |

---

## Function Prototype

```c
int ft_printf(const char *format, ...);
```

---

## Implementation Details

- Written entirely in **C**
- Uses only allowed functions:
  - `malloc`, `free`, `write`
  - `va_start`, `va_arg`, `va_copy`, `va_end`
- Does **not** implement buffer management like the original `printf`
- Output is written directly to standard output
- Compiled into a static library: `libftprintf.a`
- Each conversion is handled by a dedicated helper function

---

## Algorithm & Design Choices

### 1. Format Parsing
- Iterate through the format string character by character
- Detect `%` and identify the following conversion specifier

### 2. Variadic Argument Handling
- Use `va_list` to retrieve arguments dynamically
- Dispatch arguments to the correct handler based on the specifier

### 3. Modularity
- Separate functions for each conversion type
- Clear separation of responsibilities for readability and extensibility

### 4. Memory Safety
- No memory leaks
- All allocated memory is properly freed
- Safe handling of edge cases (NULL pointers, zero values)

---

## Compilation

To compile the library, run:

```bash
make
```

This will generate:

```text
libftprintf.a
```

---

## Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Value: %d\n", "World", 42);
    return (0);
}
```

---

## Project Structure

```text
.
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_print_char.c
├── ft_print_string.c
├── ft_print_number.c
├── ft_print_hex.c
└── ...
```

---

## Coding Standards

- Fully compliant with **42 Norm**
- Compiled with:
  ```bash
  -Wall -Wextra -Werror
  ```
- No unexpected crashes (segmentation fault, double free, etc.)
- No memory leaks tolerated

---

## Resources

- `man 3 printf`
- `man stdarg`
- C variadic functions documentation
- UNIX manual pages

---

## AI Usage

AI tools were used only for **conceptual clarification and documentation assistance**.  
All implementation logic, algorithms, and code structure were written manually.

---

## Author

**Nawras Dalqamouni**

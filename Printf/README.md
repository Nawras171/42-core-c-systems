*This activity has been created as part of the 42 curriculum by naldalqa.*

# ft_printf

## Description

ft_printf is a custom reimplementation of the standard C printf() function.  
The goal of this project is to gain a deep understanding of variadic functions, format string parsing, and low-level output handling in C.

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

The ft_printf function supports the following format specifiers:

| Specifier | Description |
|---------|------------|
| %c | Print a single character |
| %s | Print a string |
| %p | Print a pointer address in hexadecimal format |
| %d | Print a decimal number |
| %i | Print an integer |
| %u | Print an unsigned decimal number |
| %x | Print a hexadecimal number (lowercase) |
| %X | Print a hexadecimal number (uppercase) |
| %% | Print a percent sign |

---

## Function Prototype

```c
int ft_printf(const char *format, ...);

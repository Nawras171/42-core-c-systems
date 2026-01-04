his activity has been created as part of the 42 curriculum by naldalqa.
Description

ft_printf is a C library project that consists of recreating the behavior of the original printf function from the C standard library. The main objective of this project is to understand variadic functions, formatted output, and low-level input/output handling using write.

Once validated, ft_printf can be reused in future 42 projects as part of libft.
Instructions
Compilation

To compile the library, run:

make

This will generate the library:

libftprintf.a

Usage

Include the header in your source file:

#include "ft_printf.h"

Compile your program with:

cc main.c libftprintf.a

Supported Conversions

The ft_printf function supports the following format specifiers:

    %c : character
    %s : string (prints (null) if NULL)
    %p : pointer address in hexadecimal
    %d / %i : signed decimal integer
    %u : unsigned decimal integer
    %x : hexadecimal (lowercase)
    %X : hexadecimal (uppercase)
    %% : percent sign

Algorithm and Design

The function parses the format string character by character. When a '%' is encountered, the following character is analyzed to determine the conversion type. Variadic arguments are accessed using va_list and va_arg. Each conversion is handled by a dedicated helper function that prints the value and returns the number of characters written.

No buffering is implemented, and output is written directly using write, as required by the subject.
Resources

    man printf
    man stdarg
    GNU C Library Documentation
    42 Intra documentation

AI Usage
AI tools were used only for concept clarification, edge-case understanding, and debugging guidance. All code was written, tested, and fully understood by the author.

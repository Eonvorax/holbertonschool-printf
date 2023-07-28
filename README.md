# <p align="center">C - Printf</p>
Project: a quick recreation of the basic functionalities of the printf function (from the stdio library).

## Description
_printf - Produces output according to a format.
This function mimics the behavior of the standard C library printf function and handles the following conversion specifiers: %c, %s, %%, %d, %i. It writes the output to stdout, the standard output stream. It does not handle the flag characters, field width, precision, or length modifiers. The buffer handling of the C library printf function is not reproduced.

### Files

| File name |  Description|
| :--------: | :--------: |
| [main.h](https://github.com/Eonvorax/holbertonschool-printf/blob/697d4e756c5d0c57d96b9fde4d6bb419f1638701/main.h)  | header file with library inclusions and structure definition |
| [format_functions.c](https://github.com/Eonvorax/holbertonschool-printf/blob/697d4e756c5d0c57d96b9fde4d6bb419f1638701/format_functions.c) | contains functions to print each format specifier, using _putchar() |
| [_putchar.c](https://github.com/Eonvorax/holbertonschool-printf/blob/697d4e756c5d0c57d96b9fde4d6bb419f1638701/_putchar.c)  | a simple function to print a single character with write() |
| [_printf.c](https://github.com/Eonvorax/holbertonschool-printf/blob/697d4e756c5d0c57d96b9fde4d6bb419f1638701/_printf.c)  | outputs to stdout depending on the given format string and arguments |
| [man_3_printf](https://github.com/Eonvorax/holbertonschool-printf/blob/697d4e756c5d0c57d96b9fde4d6bb419f1638701/man_3_printf) | man page file (see [Man page]) |

## Requirements

- Ubuntu 20.04 LTS or higher
- gcc compiler (see "Usage" -> "Compilation").
- git 2.25 or higher
- see main.h file for dependencies

## Usage

### Compilation
``` bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

### Man page
``` bash
man ./man_3_printf
```
### Examples

Code:
```
_printf("Let's try to printf a simple sentence.\n");
```
Output:

> Let's try to printf a simple sentence.


----------


Code:
```
int len = _printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
```
Output:
> Length:[39, 39]


----------

Code:
```
_printf("Character:[%c]\n", 'H');
```
Output
> Character:[H]


----------

Code:
```
len = _printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
```
Output:
> Len:[12]

## Flowchart

[Image](https://github.com/Eonvorax/holbertonschool-printf/blob/master/flowchart.png?raw=true)

## Authors

- Pierre-Emmanuel Saint-Mézard [@Github](https://github.com/Eonvorax)
- Yasine Benslika [@Github](https://github.com/Yasine31130)

# <p align="center">C - Printf</p>
Project: a quick recreation of the basic functionalities of the printf
function (from the stdio library).

## Authors

- Pierre-Emmanuel Saint-Mézard [@Github](https://github.com/Eonvorax)
- Yasine Benslika [@Github](https://github.com/Yasine31130)

## Description
_printf - Produces output according to a format.
This function mimics the behavior of the standard C library printf function and handles the following conversion specifiers: %c, %s, %%, %d, %i. It writes the output to stdout, the standard output stream. It does not handle the flag characters, field width, precision, or length modifiers. The buffer handling of the C library printf function is not reproduced.

## Requirements

- Ubuntu 20.04 LTS or higher
- gcc compiler (see [Compilation](###Compilation)).
- git 2.25 or higher
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
## Flowchart
**TODO : FLOWCHART GOES HERE**

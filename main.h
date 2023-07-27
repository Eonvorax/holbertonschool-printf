#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format - stucture linking a format specifier and the right function
 * pointer to print it correctly
 *
 * @type: a type format specifier (a string of length 1)
 * @function: a function pointer for this specifier
 */
typedef struct format
{
	char *type;
	int (*function)(va_list);
} format_t;

int _putchar(char c);

int print_char(va_list list);

int print_string(va_list list);

int print_percent(va_list list);

int print_int(va_list list);

int get_function(char spec, va_list list);

int _printf(const char *format, ...);

#endif

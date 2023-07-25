#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct format
{
	char *type;
	int (*function)(va_list);
} format_t;

int _putchar(char c);

void _puts(char *s);

int print_char(va_list list);

int print_string(va_list list);

int print_percent(va_list list);

int get_function(char spec, va_list list);

int _printf(const char *format, ...);

#endif

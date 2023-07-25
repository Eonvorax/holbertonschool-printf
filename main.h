#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct format
{
	char *type;
	void (*function)(va_list);
} format_t;
/*
format_t tab[] = {
	{"c", print_char},
	{"s", print_string},
	{'\0', NULL}
};
*/
int _putchar(char c);

void _puts(char *s);

void print_char(va_list list);

void print_string(va_list list);

void print_percent(va_list list);

int _printf(const char *format, ...);

#endif

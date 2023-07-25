#include "main.h"
/**
 * get_function - matches given char specifier with a function pointer
 * @spec: char specifier
 * @list: va_list list of args
 * Return: int length of printed output, -1 if match not found
 */
int get_function(char spec, va_list list)
{
	unsigned int i_conv = 0;
	int count = 0;
	format_t conv[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	while (conv[i_conv].type != NULL)
	{
		if (spec == *conv[i_conv].type)
		{
			count += conv[i_conv].function(list);
			return (count);
		}
		i_conv++;
	}
	return (-1);
}
/**
 * _printf - print the given format string with every other argument
 * @format: given format string
 *
 * Description: Reads the given string, printing every non-specifier character.
 * When a '%' is found, tries to match the following character with a
 * predefined specifier in conv[] and if matched, uses the
 * corresponding pointer
 * to print the current argument. In case of '%%', prints '%'.
 * Stops on end character '\0'.
 * Return: 0 when successful, otherwise -1
 */
int _printf(const char *format, ...)
{
	unsigned int i_f = 0;
	int count = 0;
	int length = 0;
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i_f] != '\0')
	{
		if (format[i_f] == '%' && format[i_f + 1] != '\0')
		{
			length = get_function(format[i_f + 1], list);
			if (length >= 0)
			{
				count += length;
				i_f++;
			}
			else
			{
				_putchar(format[i_f]);
				count++;
			}
		}
		else
		{
			_putchar(format[i_f]);
			count++;
		}
		i_f++;
	}
	va_end(list);
	return (count);
}

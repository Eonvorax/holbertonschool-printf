#include "main.h"
/**
 * get_function - matches given char specifier with a function pointer
 * @spec: char specifier
 * @list: va_list list of args
 *
 * Description: Goes through each element of the conv[] array, each element
 * being a structure {type, function}. If a match is found, calls the right
 * function for the type specifier at this index, then returns the number
 * of printed characters.
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
		{"d", print_int},
		{"i", print_int},
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
 * predefined specifier in conv[] and if matched, uses the corresponding
 * function pointer to print the current argument.
 * Stops on end character '\0'.
 * Return: int count, the total number of characters printed to stdout.
 */
int _printf(const char *format, ...)
{
	unsigned int i_f = 0;
	int count = 0, length = 0;
	va_list list;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i_f] != '\0')
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

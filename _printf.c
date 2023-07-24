#include "main.h"
/**
 * _printf - print the given format string with every other argument
 * @format: given format string
 *
 * Description: Reads the given string, printing every non-specifier character.
 * When a '%' is found, tries to match the following character with a
 * predefined specifier in conv[] and if matched, uses the corresponding pointer
 * to print the current argument. In case of '%%', prints '%'.
 * Stops on end character '\0'.
 * Return: 0 when successful, otherwise -1
 */
int _printf(const char * format, ...)
{
	unsigned int i_f = 0;
	unsigned int i_conv = 0;
	
	/* Array of format_t structures, to convert each defined specifier
	 to the right function pointer */
	format_t conv[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i_f] != '\0')
	{
		if (format[i_f] == '%' && format[i_f + 1] == '%')
		{
			_putchar('%');
		}
		else if (format[i_f] == '%' && format[i_f + 1] != '\0')
		{
			while (conv[i_conv].type != NULL)
			{
				if (format[i_f] == *conv[i_conv].type)
				{
					conv[i_conv].function(list);
				}
				i_conv++;
			}
		}
		i_f++;
		i_conv = 0;
	}
	va_end(list);
}

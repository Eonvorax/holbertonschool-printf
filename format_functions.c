#include "main.h"
/**
 * print_string - prints string arg from list
 * @list: given va_list list
 * Return: nothing
 */
void print_string(va_list list)
{
	char *str = va_args(list, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	_puts(str);
}
/**
 * print_char - prints char arg from list
 * @list: given va_list list
 */
void print_char(va_list list)
{
	char c = va_args(list, char);

	_putchar(c);
}

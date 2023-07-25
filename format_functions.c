#include "main.h"
/**
 * print_string - prints string arg from list
 * @list: given va_list list
 * Return: nothing
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	_puts(str);
}
/**
 * print_char - prints char arg from list
 * @list: given va_list list
 * Return: nothing
 */
void print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
}
/**
 * print_percent - prints a percent
 * Return: nothing
 */
void print_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
}

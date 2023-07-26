#include "main.h"
/**
 * print_string - prints string arg from list
 * @list: given va_list list
 * Return: int length of printed string
 */
int print_string(va_list list)
{
	int length = 0;
	char *string = va_arg(list, char*);

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[length] != '\0')
	{
		_putchar(string[length]);
		length++;
	}
	return (length);
}
/**
 * print_char - prints char arg from list
 * @list: given va_list list
 * Return: 1 (length of printed char)
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
/**
 * print_percent - prints a percent
 * @list: given va_list list
 * Return: 1 (length of printed char)
 */
int print_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}

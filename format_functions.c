#include "main.h"
/**
 * print_string - prints string argument from list
 * @list: given va_list list
 *
 * Description: stores a string argument from a va_list, and checks if it
 * is NULL. If NULL, the string is changed to "(null)". Then, the string is
 * fully printed one character at a time using _putchar, and the number of
 * printed characters is returned.
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
/**
 * print_int - prints an integer number
 * @list: given va_list list
 * Return: int length of printed number (counting sign + digits)
 */
int print_int(va_list list)
{
	long int number = va_arg(list, int);
	long int result = number;
	long int divisor = 1;
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		count++;
		result = labs(result);
	}
	if (number == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while ((divisor * 10) <= result)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar((labs(result / divisor)) + '0');
		count++;
		result %= divisor;
		divisor /= 10;
	}
	return (count);
}

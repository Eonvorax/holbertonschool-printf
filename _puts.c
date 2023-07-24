#include "main.h"
/**
 * _puts - print the given string using _putchar
 * @s: pointer to given string
 * Return: On success 0
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

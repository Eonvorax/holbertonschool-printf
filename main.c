#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - testing functions
 * Return: 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent percent:[%%]\n");
	printf("Percent percent:[%%]\n");
	return (0);
}

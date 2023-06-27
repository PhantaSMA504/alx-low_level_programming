#include "main.h"

/**
 * _puts - prints out a string
 * followed by a newline
 * @str: string variable to be printed
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}

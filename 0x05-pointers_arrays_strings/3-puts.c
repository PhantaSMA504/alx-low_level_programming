#include "main.h"

/**
 * _puts - prints out a string
 * followed by a newline
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}

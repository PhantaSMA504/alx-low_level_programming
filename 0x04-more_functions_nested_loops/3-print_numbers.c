#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * followed by new line
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * excluding 2 and 4
 * followed by new line
 * Return: void
 */

void print_numbers(void)

{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}

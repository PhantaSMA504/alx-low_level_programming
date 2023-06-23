#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 * Description: Prints numbers excluding 2 and 4
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
		_putchar(a + '0');
	}
	}
	_putchar('\n');
}

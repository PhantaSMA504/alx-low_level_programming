#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10
 * followe
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(a);
	}
	_putchar('\n');
}

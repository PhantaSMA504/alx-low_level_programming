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
	int a = 0;

	while (a < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;
	}
}

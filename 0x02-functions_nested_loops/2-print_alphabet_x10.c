#include "main.h"

/**
 * void print_alphabet_x10 - prints ten times the alphabet
 * followed by newline
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar(a);
	}
}

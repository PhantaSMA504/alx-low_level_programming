#include <main.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void);
{
	char c;

	for (c = '95'; c <= '122'; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}

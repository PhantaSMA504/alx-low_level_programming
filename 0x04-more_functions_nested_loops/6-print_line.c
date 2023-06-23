#include "main.h"

/**
 * print_line - draws a straight line on terminal
 * @n: character to be printed
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	n = 0;

	while (n <= 10)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}

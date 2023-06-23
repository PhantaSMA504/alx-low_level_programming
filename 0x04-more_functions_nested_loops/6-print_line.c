#include "main.h"

/**
 * print_line - draws a straight line on terminal
 * @n: character to be printed
 * Return: Always 0 (success)
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int i;
		for (i = 1; i <= 10; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Return: 1 and prints + if n is greater than 0
 * 0 and prints 0 if n is 0
 * returns -1  and prints - if n is less than 0
 */

int print_sign(int n)
{
	int n;

	if (n > 1)
	{
		putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		putchar('0');
		return (0);
	}
	else (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
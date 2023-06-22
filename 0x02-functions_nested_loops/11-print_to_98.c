#include "main.h"

/**
 * print_to_98 - rints all natural numbers from n to 98
 * followed by a new line
 *
 * Return: void
 */

void print_to_98(int n)
{
	int result;

	if (n <= 98)
	{
		for (;n <= 98; n++)

	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}

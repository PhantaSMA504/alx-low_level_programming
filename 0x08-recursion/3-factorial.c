#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: number to be calculated
 *
 * Return: Always 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return n * factorial (n - 1);
	}
}

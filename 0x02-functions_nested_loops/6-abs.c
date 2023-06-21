#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: the number to be computed
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs1;

		abs1 = n * -1;
		return (abs1);
	}
	return (n);
}

#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: the character to be printed
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
	else
	{
		return (n);
	}
	return (0);
}

#include "main.h"

/**
 * void reset_to_98 - resets integer value to 98
 * @n: integer to be reset
 * Return: Always 0 (success)
 */

void reset_to_98(int *n)
{
	int x;

	x = 400;
	n = &x;

	*n = 98;

}

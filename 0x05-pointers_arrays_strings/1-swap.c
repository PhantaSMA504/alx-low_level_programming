#include "main.h"

/**
 * swap_int(int *a, int *b) - swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}

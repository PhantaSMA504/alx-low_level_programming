#include "main.h"

/**
 * print_last_digit:  prints the last digit of a number
 * @n: the character to be computed
 *
 * Reeturn: last value of the number
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (n < 0)
	{
		result = result * -1
	}
	return result;
}

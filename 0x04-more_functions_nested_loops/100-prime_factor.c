#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int max;
	long int b;

	a = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}

	for (b = 3; b <= sqrt(n); b = b + 2)
	{
		while (n % b == 0)
		{
			max = b;
			n = n / b;
		}
	}

	if (a > 2)
		max = a;

	printf("%ld\a", max);

	return (0);
}

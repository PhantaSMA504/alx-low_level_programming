#include <stdio.h>

/**
 * main - prints all single digits of base 10 from 0
 * followed by new line
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");

	return (0);
}

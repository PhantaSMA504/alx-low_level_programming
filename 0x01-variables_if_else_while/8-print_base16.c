#include <stdio.h>

/**
 * main prints numbers of base 16 in lowercase
 * followed by new line 
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int N;

	for (n = 48; n <= 58; n++)
	{
		putchar(n);
	}
	for (N = 'a'; N <= 'f'; N++)
	{
		putchar(N);
	}
	putchar('\n');

	return (0);
}

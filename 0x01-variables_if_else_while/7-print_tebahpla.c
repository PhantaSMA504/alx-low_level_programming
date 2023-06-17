#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * followed by newline 
 *
 * Return: Always 0 (success)
 */

int main (void)
{
	int n;

	for (n = 'Z'; n = 'A'; n--)
	{
		putchar(n);
	}
	putchar('n');

	return (0);
}

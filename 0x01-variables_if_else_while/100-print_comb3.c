#include <stdio.h>

/**
 * main - prints all different possible combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int a,b;

	for (a = 48; a < 57; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (b > a)
			{
			putchar(a);
			putchar(b);
			}
			
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
}

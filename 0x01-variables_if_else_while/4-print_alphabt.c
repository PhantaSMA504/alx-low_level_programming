#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by new line
 * except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char XX = 'a';

	while (XX <= 'z')
	{
		if (XX != 'q' && XX != 'e')
		{
			putchar(XX);
		}
		XX++;
	}
	putchar('\n');
		
	return (0);
}

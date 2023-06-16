#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by new line
 *
 * Return : Always 0 (success)
 */

int main(void)

{
	char XX;

	for (XX = 'a'; XX <= 'z'; XX++)
	{
		putchar(XX);
	}
	putchar('\n');

	return (0);
}

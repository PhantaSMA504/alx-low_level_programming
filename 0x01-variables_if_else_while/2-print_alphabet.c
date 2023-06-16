#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
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

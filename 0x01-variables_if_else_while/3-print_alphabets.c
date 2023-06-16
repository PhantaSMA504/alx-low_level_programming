#include <stdio.h>

/**
 * main - prints alphsbet in lowercase,
 * prints alphabet in uppercase,
 * followed by newline
 *
 * Return: Always 0 (success)
 */

int main (void)

{
	char XX;
       	char xx;

	for (XX ='a'; XX <='z'; XX++)
	{
		putchar(XX);
	}	

	for (xx ='A'; xx <='Z'; xx++)
	{
		putchar(xx);
	}

	putchar('\n');

	return (0);
}

#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * followed by a new line
 * @s: character string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	int middle = length / 2; 
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = string[1];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
		_putchar(s);
	}


}

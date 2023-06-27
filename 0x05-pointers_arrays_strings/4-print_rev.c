#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: string character
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int index;

	/*finds the indexing without final 0*/
	for (index = 0; s[index] != '\0'; ++index)
		;
	/*prints char from last index as you decrement*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}

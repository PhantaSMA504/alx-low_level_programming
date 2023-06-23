#include "main.h"

/**
 * _isupper: checks for uppercase characters
 * @c: character to be investigated
 *
 * Return: 1 if c is uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (!(c >= 'A' && c <= 'Z'))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return(0);
}

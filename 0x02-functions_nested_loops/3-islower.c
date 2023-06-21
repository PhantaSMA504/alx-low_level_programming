#include "main.h"
#include <ctype.h>

/**
 * main - check for lowercase character
 *
 * Return: 1 if lowercase
 * 0 if otherwise
 */

int _islower(int c);
{
	for (c = 'a'; c <= 'z';c++ )
	{
		if (c >= 97 && c <= 122)
			return (1);
	}
	return (0);
}

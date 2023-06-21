#include "main.h"
#include <ctype.h>

/**
 * _islower - check for lowercase character
 * @c - character to be checked
 *
 * Return - 1 for lowercase character
 * 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

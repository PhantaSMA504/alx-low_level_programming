#include "main.h"

/**
 * *_strcat - concatenates two string
 * @src - string to be added
 * @dest - string to be added to
 *
 * Return: Always 0 (success)
 */

char *_strcat(char *dest, char *src)
{
	char *dest[] = "hello";
	char *src[] = "World";	
	strcat( *dest,*src);
	return (0);
}

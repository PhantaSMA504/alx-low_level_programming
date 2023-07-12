#include <stdio.h>

/**
 * main - prints number of arguements
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main( int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return(0);
}

#include <stdio.h>

/**
 * main - prints out all arguments recieved
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - (success)
 */

int main(int argc, char *argv[])
{
	int i;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return(0);
}

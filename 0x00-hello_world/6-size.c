#include <stdio.h>

/**
 * main -starting point
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("size of an int: %zu byte(s)\n", sizeof(a));
	printf("size of a char: %zu byte(s)\n", sizeof(b));
	printf("size of a float: %zu byte(s)\n", sizeof(c));
	printf("size of a long int: %zu byte(s)\n", sizeof(d));
	printf("size of a long long int: %zu byte(s)\n", sizeof(e));
	return (0);
}

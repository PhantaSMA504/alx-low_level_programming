#include <stdio.h>

/**
 * main -starting point
 * Return: Always 0 (success)
 */

int main (void)
{
	int a;
	char b;
	float c;
	double d;

	printf("the size of int:%d bytes",sizeof(a));
	printf("the size of char:%d bytes",sizeof(b));
	printf("the size of float:%d bytes",sizeof(c));
	printf("the size of double:%d bytes",sizeof(d));
	return (0);
}

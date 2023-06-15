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
	long int d;
	long long int e;

	printf("the size of int:%d bytes\n",sizeof(a));
	printf("the size of char:%d bytes\n",sizeof(b));
	printf("the size of float:%d bytes\n",sizeof(c));
	printf("the size of long int:%d bytes\n",sizeof(d));
	printf("the size of long long int:%d bytes\n",sizeof(e));
	
	return (0);
}

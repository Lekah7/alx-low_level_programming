#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	float c;
	long int d;
	long long int e;

	printf("Size of a Char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int : %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu bytes(s)", (unsigned long)sizeof(e));

	return (0);
}


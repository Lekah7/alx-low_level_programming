#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		fputs(string, stdout);

	return (1);
}


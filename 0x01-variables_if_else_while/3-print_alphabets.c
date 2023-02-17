#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lower_case = 'a';
	char upper_case = 'A';

        if (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	else if (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
        putchar('\n');
        return (0);
}


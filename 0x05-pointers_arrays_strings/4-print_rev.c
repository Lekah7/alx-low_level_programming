#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lengths = 0;
	int o;

	while (*s != '\0')
	{
		lengths++;
		s++;
	}
	s--;
	for (o = lengths; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

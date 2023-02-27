#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longs = 0;
	int p = 0;
	char *q = str;
	int o;

	while (*q != '\0')
	{
		q++;
		longs++;
	}
	p = longs - 1;
	for (o = 0 ; o <= p ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

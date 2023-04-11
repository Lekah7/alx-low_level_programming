#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary digit being printed
 */

void print_binary(unsigned long int n)
{
	int count_bit = 0;
	unsigned long int ofNum;

	int i = 0;

	for (i = 63; i >= 0; i--)
	{
		ofNum = n  >> i;
		if (ofNum & 1)
		{
			_putchar('1');
			count_bit++;
		}
		else if (count_bit)
		_putchar('0');
	}
		if (!count_bit)
		_putchar('0');
}

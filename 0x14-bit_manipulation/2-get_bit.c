#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:searched for digit
 * @index:index of a bit
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitNum;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitNum = (n >> index) & 1;
	return (bitNum);
}

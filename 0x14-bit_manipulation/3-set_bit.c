#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index:index of the set bit
 * @n:pointer to number to be altered
 * Return: 1(success) -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int  index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

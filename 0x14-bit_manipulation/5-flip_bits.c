#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n:first digit
 * @m:second digit
 * Return:number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count_bits = 0;

	unsigned long int exclusiveOR = n ^ m;

	while (exclusiveOR != 0)
	{
		count_bits += exclusiveOR & 1;
		exclusiveOR >>= 1;
	}

	return (count_bits);
}

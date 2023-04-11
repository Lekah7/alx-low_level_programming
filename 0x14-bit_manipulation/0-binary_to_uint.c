#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:is pointing to a string of 0 and 1 chars
 * Return:the converted number,
 * 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deciNum = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}

		deciNum = 2 * deciNum + (b[j] - '0');
	}
	return (deciNum);
}

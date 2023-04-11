#include "main.h"

/**
 * get_endianness - get_endianness
 * Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int val = 1;
	char *ch_ptr = (char *) &val;

	return (*ch_ptr);
}

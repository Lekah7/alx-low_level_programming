#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase.
 * @c: is the interger to be checked
 * Return: 1 if c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

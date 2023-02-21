#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: is the char to be checked
 * Return: 1 if char is lowercase or uppercase, otherwise 0.
*/
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

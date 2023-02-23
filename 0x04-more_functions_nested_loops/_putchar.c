#include "main.h"
#include <unistd.h>

/**
 * main - writes the character c to the main stdout
 *  
 * Return: Always 1 (Success) or esle -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

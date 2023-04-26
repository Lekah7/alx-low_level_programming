#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *make_buffer(char *file);
void exit_file(int fd);

/**
 * make_buffer - forms a buffr of  1024 bytes
 * @file: ptr to a fil'e
 * Return: a new allocatd pointr
 */

char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * exit_file - escapes fil descriptrs
 * @fd: file
 */
void exit_file(int fd)
{
	int e;

	e = close(fd);
	if (e == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - duplicats file.
 * @argc: arguement suplied
 * @argv: argument pointr
 *
 * Return: 0 on success
 *
 */
int main(int argc, char *argv[])
{
	int begin, end, w, s;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
		"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	begin = open(argv[1], O_RDONLY);
	s = read(begin, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (begin == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(end, buffer, s);
		if (end == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		s = read(begin, buffer, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(buffer);
	exit_file(begin);
	exit_file(end);

	return (0);
}

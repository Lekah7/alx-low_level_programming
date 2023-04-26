#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reeds a txt file, prints it to the POSIX STDOUT
 * @filename: file
 * @letters: num of lettrs read
 * Return: num of letters read & prints, otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileRead;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	char *buffer;

	fileRead = open(filename, O_RDONLY);
	if (fileRead == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	bytesRead = read(fileRead, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	close(fileRead);
	free(buffer);
	return (bytesWritten);
}

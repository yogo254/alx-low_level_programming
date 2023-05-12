#include "main.h"

/**
 * read_textfile - reads a txt file and prints it to standard output
 * @filename: file name
 * @letters: number of characters
 * Return: if success return number of letter, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	char *buffer;
	ssize_t readBytes, writtenBytes;

	if (filename == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	readBytes = read(descriptor, buffer, letters);
	if (readBytes == -1)
		return (0);

	buffer[letters + 1] = '\0';
	close(descriptor);

	writtenBytes = write(STDOUT_FILENO, buffer, readBytes);
	if (writtenBytes == -1)
		return (0);

	free(buffer);

	return (readBytes);
}

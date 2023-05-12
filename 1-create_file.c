#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}


/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	unsigned int length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		length = 0;
		text_content = "";
	}
	else
		length = _strlen(text_content);

	bytes_written = write(descriptor, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(descriptor);
	return (1);
}

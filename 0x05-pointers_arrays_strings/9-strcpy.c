#include <stdio.h>
#include <string.h>
/**
 * _strcpy - print pointer value
 * @dest: destination array
 * @src: source array
 *
 * Description: get string lenght of a pointer.
 * Return: dest array
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);

	for (int x = 0; x < len; ++x)
	{
		dest[x] = src[x];
	}

	return (*dest);
}

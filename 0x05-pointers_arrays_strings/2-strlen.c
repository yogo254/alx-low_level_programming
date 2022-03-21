#include <string.h>
/**
 * _strlen - get string length
 * @s: String pointer
 *
 * Description: get string lenght of a pointer.
 * Return: string length
 */

int _strlen(char *s)
{
	char text = (char)s;

	int len = strlen(text);

	return (len);
}

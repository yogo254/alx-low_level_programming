#include <string.h>
/**
 * _strchr - locate a string
 * @s: source string
 * @c: character to locate

 * Description: locates char c in string s.
 * Return: a pointer to c in s
 */
char *_strchr(char *s, char c)
{
	char *tmp;

	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			tmp = s[i];
			break;
		}
	}
	return (*tmp);
}

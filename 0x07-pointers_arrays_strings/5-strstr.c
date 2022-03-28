#include <string.h>
/**
 * *_strstr- searches for substring needle in haystack
 * @haystack: source string
 * @needle: bytes to find is s

 * Description: searches for needle in s
 * Return: pointee to any match
 */
char *_strstr(char *haystack, char *needle)
{
	int len = strlen(haystack);

	char *temp = NULL;

	for (int i = 0; i < len; i++)
	{
		if (haystack[i] == needle[0])
		{
			temp = haystack[i];
			break;
		}
	}

	return (*temp);
}

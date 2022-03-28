#include <string.h>
#include <stdbool.h>
/**
 * *_strpbrk - searches for accept in s
 * @s: source string
 * @accept: bytes to find is s

 * Description: searches for accept in s
 * Return: pointe to any match
 */
char *_strpbrk(char *s, char *accept)
{
	int len = strlen(s);

	int len2 = strlen(accept);

	char *temp = NULL;

	bool flag = 0;

	for (int i = 0; i < len; i++)
	{
		for (int x = 0; x < len2; x++)
		{
			if (s[i] == accept[x])
			{
				temp = s[i];
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	return (*temp);
}

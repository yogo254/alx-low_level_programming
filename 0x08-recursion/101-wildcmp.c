#include <stdio.h>
#include <string.h>
/**
 * wildcmp- checks if two string are identical
 * @s1: first String
 * @s1: second String
 * Description:  checks if two string are identical
 * Return: void
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);

	int len2 = strlen(s2);

	if (len2 != len1)
	{
		return (0);
	}
	else
	{

		for (int i = 0; i < len1; i++)
		{
			if (s1[i] != s2[i])
				return (0);
		}
		return (1);
	}
}

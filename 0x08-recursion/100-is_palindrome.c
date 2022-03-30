#include <string.h>
/**
 * is_palindrome- checks if a string id palindrome
 * @s: String
 * Description:  checks if a string id palindrome
 * Return: void
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len - 1; i++)
	{
		if (s[i] != s[len - (1 + i)])
		{
			return (0);
		}
	}
	return (1);
}

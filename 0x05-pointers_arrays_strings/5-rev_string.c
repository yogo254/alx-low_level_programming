#include <stdio.h>
#include <string.h>
/**
 * rev_string - print pointer value
 * @s: String pointer
 *
 * Description: get string lenght of a pointer.
 * Return: string length
 */
void rev_string(char *s)
{
	int len = strlen(s);

	for (int x = len - 1; x >= 0; --x)
	{
		printf("%c", s[x]);
	}
	printf("\n");
}

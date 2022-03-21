#include <stdio.h>
#include <string.h>
/**
 * puts2 - print pointer value
 * @str: String pointer
 *
 * Description: get string lenght of a pointer.
 * Return: string length
 */
void puts2(char *str)
{
	int len = strlen(str);

	for (int x = 0; x < len; x = x + 2)
	{
		printf("%c", str[x]);
	}
	printf("\n");
}

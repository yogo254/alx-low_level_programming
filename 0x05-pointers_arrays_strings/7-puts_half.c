#include <stdio.h>
#include <string.h>
/**
 * puts_half - print pointer value
 * @str: String pointer
 *
 * Description: get string lenght of a pointer.
 * Return: string length
 */
void puts_half(char *str)
{
	int len = strlen(str);

	int n = 0;
	
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (int x = n; x < len; ++x)
	{
		printf("%c", str[x]);
	}	
	printf("\n");
}

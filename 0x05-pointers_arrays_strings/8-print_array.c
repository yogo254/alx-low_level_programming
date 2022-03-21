#include <stdio.h>
#include <string.h>
/**
 * print_array - print pointer value
 * @a: integer array
 * @n: number of elements to print
 *
 * Description: get string lenght of a pointer.
 * Return: string length
 */
void print_array(int *a, int n)
{
	int len = strlen(a);

	for (int x = 0; x < len; ++x)
	{
		printf("%d", a[x]);
	}
	printf("\n");
}

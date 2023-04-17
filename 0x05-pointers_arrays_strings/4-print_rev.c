#include <stdio.h>
#include <string.h>
/**
 * print_rev - print pointer value
 * @s: String pointer
 *
 * Description: get string lenght of a pointer.
 * Return: string length
 */
void print_rev(char *s)
{
	puts(strrev(s));
	printf("\n");
}

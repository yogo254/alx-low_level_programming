#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion- print string using reccursion
 * @s: String
 * Description:  print string using reccursion
 * Return: void
 */
void _puts_recursion(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		putchar(s[i]);
	}
}

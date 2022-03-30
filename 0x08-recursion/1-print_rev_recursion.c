#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion- print string using reccursion
 * @s: String
 * Description:  print string using reccursion
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}

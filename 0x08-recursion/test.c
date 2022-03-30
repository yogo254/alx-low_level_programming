#include <stdio.h>
#include <string.h>
void _puts_recursion(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		putchar(s[i]);
	}
}

int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
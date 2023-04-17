#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int letter;
	
	letter = 'a';
	for (; letter < (97 + 26); letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

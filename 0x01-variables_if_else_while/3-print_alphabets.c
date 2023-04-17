#include <stdio.h>
/* more headers goes there */

/**
 * main - main function
 * @void: no params
 *
 * Description: main function.
 * Return: exist status
 */
int main(void)
{
	int letter;

	letter = 'a';
	for (; letter < (97 + 26); letter++)
	{
		putchar(letter);
	}

	letter = 'A';
	for (; letter < (65 + 26); letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}

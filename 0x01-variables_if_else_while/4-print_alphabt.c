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
		if (letter != 101 && letter != 113)
			putchar(letter);
	}
	putchar('\n');
	return (0);
}

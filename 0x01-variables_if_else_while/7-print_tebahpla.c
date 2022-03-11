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

	letter = 'z';
	for (; letter >= 97; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

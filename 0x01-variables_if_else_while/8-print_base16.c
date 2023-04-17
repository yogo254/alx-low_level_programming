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

	letter = 0;
	for (; letter < 10; letter++)
	{
		putchar((letter % 10) + '0');
	}
	letter = 'a';
	for (; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

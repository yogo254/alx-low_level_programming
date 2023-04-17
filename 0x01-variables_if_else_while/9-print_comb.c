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
		if (letter < 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}

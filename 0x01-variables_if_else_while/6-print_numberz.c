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
	int digit;

	digit = 0;
	for (; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	putchar('\n');
	return (0);
}

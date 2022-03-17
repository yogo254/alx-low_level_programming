#include <stdio.h>

#include <time.h>
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

	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else

			printf("%d ", num);

		num++;
	}
	printf("\n");

	return (0);
}

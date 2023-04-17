#include <stdio.h>
#include <string.h>
/**
 * factorial get factorials
 * @n:number
 * Description:  get factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

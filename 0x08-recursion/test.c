#include <stdio.h>
#include <string.h>

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0 && i != n)
			{
				return (0);
			}
		}
		return (1);
	}
}

int main(void)
{
	int p = is_prime_number(7);
	printf("%d", p);
	return (0);
}
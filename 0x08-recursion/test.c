#include <stdio.h>
#include <string.h>

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i * i == n)
			{
				return (i);
			}
			else if (i * i > n)
			{
				return (-1);
			}
		}
	}
}

int main(void)
{
	int p = _sqrt_recursion(13);
	printf("%d", p);
	return (0);
}
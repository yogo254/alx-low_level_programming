#include <stdio.h>
#include <string.h>
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}

int main(void)
{
	int p = _pow_recursion(10, 2);
	printf("%d", p);
	return (0);
}
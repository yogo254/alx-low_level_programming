/**
 * _sqrt_recursion- get square root of n
 * @n: number
 * Description:  get square root of n
 * Return: square root of n
 */
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

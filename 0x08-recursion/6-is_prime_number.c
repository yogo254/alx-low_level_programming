/**
 * is_prime_number-checks if a number is prime
 * @n: number
 * Description: checks if a number is prime
 * Return: is prime
 */
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

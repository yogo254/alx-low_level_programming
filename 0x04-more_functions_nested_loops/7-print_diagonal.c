/**
 * print_diagonal - print diagonal.
 * @n: diagonal size
 * Return: returns nothing.
 */
void print_diagonal(int n)
{

	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}

	_putchar('\n');
}

/**
 * print_square - print square.
 * @size: square size
 * Return: returns nothing.
 */
void print_square(int size)
{
	int x = 0;

	int y = 0;

	if (size <= 0)
	{
		while (x < size)
		{
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');

			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

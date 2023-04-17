/**
 * print_triangle - print triangle.
 * @size: triangle size
 * Return: returns nothing.
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		for (int x = 1; x <= size; ++x)
		{

			int count = 0;

			while (count <= (size - x))
			{
				_putchar(' ');
			}
			count = 1;
			while (count <= x)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

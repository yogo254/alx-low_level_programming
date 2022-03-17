/**
 * print_line - print digits.
 * @void: empty param
 * Return: returns nothing.
 */
void print_line(int n)
{
	int count = 0;

	if (n > 0)
		while (count < n)
		{
			_putchar('_');
		}
	_putchar('\n');
}

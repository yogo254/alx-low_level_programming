/**
 * print_most_numbers - print digits.
 * @void: empty param
 * Return: returns nothing.
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar(num);
		num++;
	}
	_putchar('\n');
}

/**
 * more_numbers - print digits.
 * @void: empty param
 * Return: returns nothing.
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int num = 0;

		while (num < 15)
		{

			_putchar(num);
			num++;
		}
		_putchar('\n');
		count++;
	}
}

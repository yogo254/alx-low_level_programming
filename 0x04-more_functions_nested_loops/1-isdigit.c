/**
 * _isdigit - digit checker.
 * @c: digit to check
 * Return: 1 : digit , 0 : not digit.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

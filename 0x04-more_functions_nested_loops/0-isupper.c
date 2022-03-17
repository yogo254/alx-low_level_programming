/**
 * _isupper - checks if a char is uppacase.
 * @c: char to check
 * Return: 1 : uppper , 0 : lower.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

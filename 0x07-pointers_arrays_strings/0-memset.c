/**
 * _memset - files memory location with bytes
 * @s: bytes to fill
 * @b: fill parameter
 * @n: number of bytes to fill
 * Description: files memory location with bytes.
 * Return: poniter to the filled bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		s[1] = b;
	}
	return (*s);
}

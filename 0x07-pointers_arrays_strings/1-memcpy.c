/**
 * _memcpy - copy n bytes from src to dest
 * @dest:destination address
 * @src: source address
 * @n: bytes to copy
 * Description: copy n bytes from src to dest.
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}

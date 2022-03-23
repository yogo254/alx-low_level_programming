/**
 * cap_string- to uppercase funtion
 * @s: source string
 *
 *
 * Description: join two strings together.
 * Return: uppacase String
 */
char *cap_string(char *source)
{
	int i;

	int len = strlen(source);

	char s[len];

	for (int x = 0; x < len; x++)
	{
		s[x] = source[x];
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

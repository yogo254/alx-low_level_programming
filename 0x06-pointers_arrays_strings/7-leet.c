/**
 * cap_string- to uppercase funtion
 * @s: source string
 *
 *
 * Description: le code encodings.
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

	for (i = 0; i < len; i++)
	{
		if (s[i] == 'a')
		{
			s[1] = '4';
		}
		else if (s[i] == 'A')
		{
			s[1] = '4';
		}
		else if (s[i] == 'e')
		{
			s[i] = '3';
		}
		else if (s[i] == 'E')
		{
			s[1] = '3';
		}
		else if (s[i] == 'o')
		{
			s[1] = '0';
		}
		else if (s[i] == 'O')
		{
			s[1] = '0';
		}
		else if (s[i] == 't')
		{
			s[1] = '7';
		}
		else if (s[i] == 'T')
		{
			s[1] = '7';
		}
		else if (s[i] == 'l')
		{
			s[1] = '1';
		}
		else if (s[i] == 'L')
		{
			s[1] = '1';
		}
	}

	return (s);
}

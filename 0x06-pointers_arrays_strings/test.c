#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char *source = "hell";
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
	printf("%s", s);
	return 0;
}

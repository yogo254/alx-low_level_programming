#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char *s = "0123456789";
	int len = strlen(s);

	for (int x = 0; x < len; x = x + 2)
	{
		printf("%c", s[x]);
	}
	printf("\n");

	return 0;
}

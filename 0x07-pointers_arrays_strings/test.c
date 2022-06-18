#include <stdio.h>

int main()
{
	char s[] = "Welcome";
	char *p;
	int i = 0;
	char c = 'l';

	while (s[i] != '\0')
	{
		if (c == s[i])
			p = &s[i - 1];
		i++;
	}
	printf("string in p = %s\n", p);
}

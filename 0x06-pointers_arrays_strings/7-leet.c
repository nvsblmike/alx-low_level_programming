#include "main.h"
/**
* leet - the function
* Description: it changes values
* @s: parameter
* Return: s
*/
char *leet(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 4;
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = 3;
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = 0;
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = 7;
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = 1;
	}
	s[i] = '\0';
	return (s);
}

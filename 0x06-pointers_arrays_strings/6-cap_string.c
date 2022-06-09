#include "main.h"
/**
* cap_string - the function
* Description: it capitalizes words
* @s: parameter
* Return: pointer
*/
char *cap_string(char *s)
{
	int i, len;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] >= ' ' && s[i - 1] <= '/' && s[i]  >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else if (s[i - 1] >= ':' && s[i - 1] <= '@' && s[i]  >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else if (s[i - 1] >= '[' && s[i - 1] <= '\'' && s[i]  >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] >= '{' && s[i - 1] <= '~' && s[i]  >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else
			s[i] = s[i];
	}
	return (s);
}

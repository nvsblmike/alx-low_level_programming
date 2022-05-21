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

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
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

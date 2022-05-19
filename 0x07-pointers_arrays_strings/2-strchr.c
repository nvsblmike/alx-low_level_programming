#include "main.h"
/**
* _strchr - the function
* Description: locates a string
* @s: parameter
* @c: parameter
* Return: s
*/
char *_strchr(char *s, char c)
{
	int i, j, len;

	i = j = len = 0;
	while (s[i] != '\0')
		i++;
	len = i;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			while (j < len)
			{
				_putchar(s[j]);
				j++;
			}
		}
	}
	return (s);
}

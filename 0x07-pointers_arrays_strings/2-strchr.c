#include <unistd.h>
#include <stdlib.h>
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
	int i;
	char *g;

	g = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			g = &s[i];
			return (g);
		}
		else if (c == '\0')
			return ('\0');
	}
	return ('\0');
}

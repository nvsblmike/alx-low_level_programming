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
	int p;
	char *g;

	for (i = 0, p = 0; s[i] != '\0'; i++, p++)
	{
		if (c == s[i])
			g = &s[p];
		if (c != s[i])
			return (NULL);
	}
	s[i] = '\0';
	return (g);
}

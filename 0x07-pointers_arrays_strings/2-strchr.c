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
	int i, j;
	char *p;

	p = s;
	for (i = 0, j = 0; p[i] != '\0'; i++, j++)
	{
		if (c == p[i])
			s[j] = p[i];
		else if (c != p[i])
			return (NULL);
	}
	s[j] = '\0';
	return (s);
}

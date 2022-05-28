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
	char *p;
	p = s;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (c == p[i])
			s[i] = p[i];
		else if (c != p[i])
			return (NULL);
	}
	return (s);
}

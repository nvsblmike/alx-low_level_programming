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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			p = &s[i];
	}
	if (c != s[i])
		return (NULL);
	}
	return (p);
}

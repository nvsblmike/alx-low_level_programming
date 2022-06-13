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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			g = &s[i];
	}
	if (g == NULL)
		return (NULL);
	return (g);
}

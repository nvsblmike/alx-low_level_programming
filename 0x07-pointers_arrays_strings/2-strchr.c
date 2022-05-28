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

	for (i = 0; s[i] != '\0'; i++)
		if (c == s[i])
			return (s);
		else if (c != '\0')
			return (NULL);
}

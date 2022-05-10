#include "main.h"

/**
* _strcmp - the fynction
* Description: it compares two strings
*
* @s1: a parameter
* @s2: a parameter
* Return: dest
*/

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
		if (*s == '\0')
			return (0);
	return (*s1 - *s2);
}

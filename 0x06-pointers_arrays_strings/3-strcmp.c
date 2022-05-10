#include "main.h"
/**
 * _strcmp - the function
 * Description: it comparrs two strings
 *
 * @s1: parameter
 * @s2: parameter
 * Return: s1
 */
int *_strcmp(char s1, char s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);
	return (*s1 - *s2);
}

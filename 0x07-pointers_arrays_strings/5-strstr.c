#include "main.h"
/**
* _strstr - the function
* Description: it locates a substring
* @haystack: parameter
* @needle: parameter
* Return: a value
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
			return (&haystack[i]);
	}
	return ('\0');
}

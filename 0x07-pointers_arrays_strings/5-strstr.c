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
	int j = 0;
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i] && needle[1] == haystack[i + 1])
			return (&haystack[i]);
	}
	if (needle[0] == '\0')
		return (&haystack[j]);
	return ('\0');
}

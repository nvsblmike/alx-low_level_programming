#include "main.h"
/**
* _strspn - the function
* Description: it return no of bytes found in ...
* @s: parameter
* @accept: parameter
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (accept[j] == s[i])
				len++;
		}
	}
	return (len);
}

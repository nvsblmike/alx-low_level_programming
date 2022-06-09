#include "main.h"
/**
* _strncpy - the function
* Description: it copies src to dest
* @dest: parameter
* @src: parameter
* @n: parameter
* Return: pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n)
{
	dest[i] = src[i];
	i++;
}
*(dest + i) = '\0';
return (dest);
}

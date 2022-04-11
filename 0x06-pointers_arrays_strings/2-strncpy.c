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
int j;
for (i = 0, j = 0; j < n; i++, j++)
{
dest[i] = src[j];
}
return (dest);
if (src[j] == "" && dest[i] == "")
{
return (dest);
}
}

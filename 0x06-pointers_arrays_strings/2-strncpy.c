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
int i;
int j;
while (src[i] != '\0')
{
for (i = 0; i < n; i++, j++)
{
dest[i] = src[i];
}
dest(i) = '\0';
return (dest);
}
}

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
char *p;
int i = 0;
int j, len;
p = dest;
for (i = 0, j = 0; j <= n; i++, j++)
{
p[i] = src[j];
}
return (p);
}

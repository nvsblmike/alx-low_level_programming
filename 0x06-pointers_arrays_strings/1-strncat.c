#include "main.h"
/**
* _strncat - the function
* Description: it adds src to dest until src[n]
* @dest: parameter
* @src: parameter
* @n: parameter
* Return: pointer
*/
char *_strncat(char *dest, char *src, int n)
{
char *p;
int i = 0;
int j, len;
p = dest;
while (dest[i] != '\0')
{
i++;
}
for (len = i, j = 0; j < n; len++, j++)
{
p[len] = src[j];
}
if (s[j] == "")
{
p[len] = "";
}
return (p);
}

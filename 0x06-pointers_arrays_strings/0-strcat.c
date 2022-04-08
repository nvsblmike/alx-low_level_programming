#include "main.h"
/**
* _strcat - the function
* Description: it attaches src to dest
* @dest: parameter
* @src: parameter
* Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *p;
int i = 0, k = 0, j, len;
p = dest;
while (dest[i] != '\0')
{
i++;
}
while (src[k] != '\0')
{
k++;
}
for (len = i, j = 0; len < (i + k), j < k; len++, j++)
{
p[len] = src[j];
}
return (p);
}

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
int j;
for (j = 0 ; j < n && (*dest = src[j]) != '\0'; dest++, j++)
;
*dest = '\0';
return (dest);
}

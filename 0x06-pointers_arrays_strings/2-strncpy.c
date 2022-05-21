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
int i, j;
for (i = 0, j = 0 ; j < n && (*(dest + i) = src[j]) != '\0'; i++, j++)
;
*(dest + i) = '\0';
return (dest);
}

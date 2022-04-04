#include "main.h"
/**
* _memcpy - the function
* Description: it copies a value to a variable
* @dest: parameter
* @src: parameter
* @n: parameter
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
_putchar('\n');
}

#include "main.h"
/**
* _memset - this is the function
* Description: it fills in the array space allocated to an array with sth
* @s: parameter
* @b: parameter
* @n: parameter
* Return: Nothing
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return(s[i]);
_putchar('\n');
}

#include "main.h"
/**
* string_toupper - the function
* Description: it converts a string to uppercase 
* @a: the parameter
* Return: a pointer
*/
char *string_toupper(char *a)
{
int i, len, y;
char *p;
p = a;
while (a[i] != '\0')
{
i++;
}
for (len = 0, y = 0; y < i; len++, y++)
{
p[len] = a[y];
a[y] = p[len] - 32;
}
return (p);
}

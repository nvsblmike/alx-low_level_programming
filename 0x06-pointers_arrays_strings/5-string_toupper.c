#include "main.h"
/**
* string_toupper - the function
* Description: it converts a string to uppercase
* @a: the parameter
* Return: a pointer
*/
char *string_toupper(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
}
return (a);
}

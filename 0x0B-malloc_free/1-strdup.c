#include "holberton.h"
/**
* _strdup - the function
* Description: it copies a strimg's value
* @str: parameter
* Return: pointer
*/
char *_strdup(char *str)
{
char *m;
m = malloc(sizeof(char) * sizeof(*str));
 int i;
for (i = 0; i < sizeof(*str); i++)
{
m[i] = str[i];
}
return (m);
free(m);
}

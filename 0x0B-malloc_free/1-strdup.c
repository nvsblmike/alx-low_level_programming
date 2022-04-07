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
unsigned int i;
m = malloc(sizeof(char) * str);
if (str == 0 || m == NULL)
{
return (NULL);
}
for (i = 0; i < str; i++)
{
m[i] = str[i];
}
return (m);
free(m);
}

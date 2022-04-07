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
m = malloc(sizeof(char) * sizeof(str));
for (i = 0; i <= sizeof(str); i++)
{
m[i] = str[i];
}
return (m);
if (str[i] == 0 || m == NULL)
{
return (NULL);
}
free(m);
}

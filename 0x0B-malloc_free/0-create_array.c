#include "Holberton.h"
/**
* create_array - the function
* Description: it creates an array
* @size: parameter 
* @c: parameter
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *t;
t = malloc(sizeof(char) * size);
if (size == 0 || t == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
t[i] = c;
}
return (t[i]);
free(t);
}

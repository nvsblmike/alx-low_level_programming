#include "main.h"
/**
* cap_string - the function
* Description: it capitalizes words
* @a: parameter
* Return: pointer
*/
char *cap_string(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
if ((a[i - 1] < 'A' || a[i - 1] > 'z') && a[i - 1] != '-')
{
a[i] = a[i] - 32;
}
}
}
return (a);
}

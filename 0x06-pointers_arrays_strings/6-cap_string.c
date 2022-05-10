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
for ( ; *a != '\0'; a++)
{
if (*a >= ' ' && *a <= '/')
a++;
if (*a >= ':' && *a <= '@')
a++;
else if (*a >= 'a' && *a <= 'z')
{
*a = *a - 32;
}
else if (*a >= '0' && *a <= '9')
{
*a = *a;
}
else
{
a++;
}
return (a);
}

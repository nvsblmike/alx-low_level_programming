#include "main.h"
/**
*_isupper - this is the function
*Description: returns 1 if a character is in the uppercase
*@c: parameter involved
*Return: 1 else 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}

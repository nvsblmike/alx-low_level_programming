#include "main.h"
/**
*is_alpha - FUnction that approves of alphabets as characters
*@c: Parameter to check
*Description: Whatever really
*Return: Always  0(Success)
*/
int _isalpha(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else if ((c >= 97) && (c <= 122))
{
return (1);
}
else
{
return (0);
}
}

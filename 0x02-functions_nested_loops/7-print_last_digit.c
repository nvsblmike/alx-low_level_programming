#include "main.h"
/**
*print_last_digit - function sha
*@c: rrutututu
*Description: Print lasat digit
*Return: Always 0(Success)
*/
int print_last_digit(int c)
{
c = c % 10;
if (c < 0)
{
c = -c;
}
_putchar(c + '0');
return (c);
}

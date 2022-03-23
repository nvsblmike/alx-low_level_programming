#include "main.h"
/**
*print_rev - wjfwjfwnfw
*Description: This function prints a string in reverse
*@s: parameter
*Return: nothing
*/
void print_rev(char *s)
{
int i, j, len;
i = 0;
while( s[i] != '\0' )
{
i++;
}
len = i;
j = len - 1;
while( j >= 0 )
{
puts( s[j] );
j--;
}
_putchar( '\n' );
}

#include "main.h"
/**
*print_diagonal - the function
*Description: it prints a character diagonally
*@n: the parameter
*/
void print_diagonal(int n)
{
int i, space;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (space = 0; space < i; space++)
{
if (i == 0 && space == 0)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
}

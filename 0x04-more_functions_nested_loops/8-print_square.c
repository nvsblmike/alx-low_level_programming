#include "main.h"
/**
*print_square - the function
*Description: this function prints a square
*@size: parameter
*/
void print_square(int size)
{
int i, square;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (square = 0; square < size; square++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

#include "main.h"
/**
*print_triangle - the function
*Description: This function prints a triangle
*@size: the parameter
*/
void print_triangle(int size)
{
int i, space, triangle;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (space = i; space < size; space++)
{
_putchar(' ');
}
for (triangle = 1; triangle <= i; triangle++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

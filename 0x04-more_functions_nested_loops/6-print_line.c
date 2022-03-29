#include "main.h"
/**
*print_line - a function
*Description: this fucntionprints a line of size n
*@n: parameter
*/
void print_line(int n)
{
int c;
if (n > 0)
{
for (c = 0; c < n; c++)
{
_putchar('_');
}
}
_putchar('\n');
}

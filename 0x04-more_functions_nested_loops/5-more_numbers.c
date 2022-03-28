#include "main.h"
/**
*more_numbers - this is a function
*Description: This prints 0-14 10 times
*@void: no argument is passed
*/
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}

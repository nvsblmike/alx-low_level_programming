#include "main.h"
/**
*print_most_numbers - the function
*Definition: it prints nos 0 to 9 except 2 and 4
*@void: no argument
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
while (i != 2 && i != 4)
{
_putchar(i);
}
}
}

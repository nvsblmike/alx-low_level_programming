#include "main.h"
/**
*print_alphabet_x10 - Prints out the alphabet 10 times
* @void: quite empty
* Description: This function prints out the English alphabet 10 times
* Return: Always 0(Success)
*/
void print_alphabet_x10(void)
{
int i;
char y;
for (i = 1; i <= 10; i++)
{
for (y = 'a'; y <= 'z'; y++)
{
_putchar(y);
}
_putchar('\n');
}
}

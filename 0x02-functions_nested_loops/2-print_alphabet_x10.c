#include "main.h"
/**
*print_alphabet_x10 - Prints out the alphabet 10 times
* @void: quite empty
* Description: This function prints out the English alphabet 10 times
* Return: Always 0(Success)
*/
void print_alphabet_x10(void)
{
int i = 0, j;
char y = 'a';
for (i = 0; i < 10; i++)
{      
for (j = 0; j < 26; j++)	
{
_putchar(y + j);
}     
_putchar("\n");
}  
}
print_alphabet_X10();

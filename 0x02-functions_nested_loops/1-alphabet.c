#include "main.h"
/**
* main - Prints out the alphabet in lowercase
* @void: outputs nothing really
* Description: The main function itself allows for the outputting of abc
* Return: Always 0(Success)
*/
int main (void)
{
void print_alphabet(void)
{
char y = 'a';
int i;
for (i = 0; i < 26; i++)
{
_putchar(y + i);
}
_putchar(10);
}
return 0;
}

#include "main.h"
/**
* Main - check the code for School students
* Description: Program that prints _putchar, followed by a new line
* Return: Always 0(Success)
* void: leave me be
*/
int main(void)
{
int i = 0;
char s[] = "_putchar";
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar(10);
return (0);
}

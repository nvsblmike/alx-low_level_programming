#include <stdio.h>
/**
* main - the function
* Description: it prints out the name of the compiler
* @void: parameter
* Return: (Success)
*/
int main(void)
{
char *p;
p = __FILE__;
printf("%s\n", p);
return (0);
}

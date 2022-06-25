#include "main.h"
/**
* _puts_recursion - function
* Description: it prints out a string and nl
* @s: parameter
* void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_putchar('\n');
	}
}

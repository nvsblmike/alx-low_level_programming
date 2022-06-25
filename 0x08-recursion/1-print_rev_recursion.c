#include "main.h"
/**
* _print_rev_recursion - the function
* Description: it reverses a string
* @s: parameter
* void
*/
void _print_rev_recursion(char *s)
{
	int i, len = 0;
	char *p;

	while (s[i] != '\0')
		len++;
	for (i = 0, len = len; p[i] = s[len]; i++, len--)
		_putchar(p[i]);
}

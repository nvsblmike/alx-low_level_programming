#include "main.h"
/**
* _print_rev_recursion - the function
* Description: it also reverses a string
* printer_rev - another function
* Description: it reverses a string
* @i: parameter
* @len: parameter
* @c: parameter
* @j: parameter
* @s: parameter
* void
*/
void _print_rev_recursion(char *s)
{
	int g;
	void printer_rev(char s[], int i, int len);

	int reg = _putchar(s);
	printer_rev(s, 0, reg);
}
void printer_rev(char s[], int i, int len)
{
	int c, j;

	j = len - (i + 1);
	if (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	printer_rev(s, ++i, len);
	}
}

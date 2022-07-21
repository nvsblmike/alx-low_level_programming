#include "main.h"
/**
* _print_rev_recursion - the function
* Description: it reverses a string
* @s: parameter
* void
*/
void _print_rev_recursion(char *s)
{
	int c, t, j, len;

	t = 0;
	while (s[t] != '\0')
		t++;
	len = t;
	i = 0;
	j = len - (i + 1);
	if (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	i = 1;
	_print_rev_recursion(s++);
}

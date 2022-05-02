#include <stdio.h>
#include "main.h"

/**
* _atoi - the function
* Description: it converts strings to integer
* @s: the parameter
* Return: n or 0
*/

int _atoi(char *s)
{
	int i, n, sign;

	for (i = 0; s[i] == ' '; i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}

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
	int i, n;
	n = 0;

	for (i = 0; *(s + i) >= '0' && *(s + i) <= '9'; i++)
	{
		if (*(s + i) != '')
		{
			n = 10 * n + (*(s + i) - '0');
		}
		else {
			return (0);
		}
	}
	return (n);
}

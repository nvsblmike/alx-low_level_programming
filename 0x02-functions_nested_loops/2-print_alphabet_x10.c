#include "main.h"
/**
* print_alphabet_x10 - function
* Description: it prints a-z 10 times
* @void: no parameter
* Return: nothing
*/

void print_alphabet_x10(void)
{
	int out = 0;
	int a = 'a';
	int b = 'z';
	int c = 'a';
	int i = '\n';

	while (out < 10)
	{
		while (c >= a && c <= b)
		{
			_putchar(c);
			c++;
		}

		out = out + 1;
	}
	_putchar(i);
}

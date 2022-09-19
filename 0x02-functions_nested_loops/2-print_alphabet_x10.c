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

	for (out = 0; out < 10; out++)
	{
		while (c >= a && c <= b)
		{
			_putchar(c);
			c++;
		}
	}
	_putchar(i);
}

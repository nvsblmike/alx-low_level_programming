#include "main.h"
/**
* print_alphabet - function
* Description: prints alphabet in lower case
* @void: no parameter
* Return: always nothing
*/

void print_alphabet(void)
{
	int a = 'a';
	int b = 'z';
	int i = '\n';
	int c = 'a';

	while (c >= a && c <= b)
	{
		_putchar(c);
		c++;
	}
	_putchar(i);
}

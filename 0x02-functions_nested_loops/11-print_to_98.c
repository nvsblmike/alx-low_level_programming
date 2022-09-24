#include "main.h"
/**
* print_to_98 - function
* Description: it prints from n to 98
* @n: parameter
* Return: always nth
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		_putchar(i - '0');
	}
}

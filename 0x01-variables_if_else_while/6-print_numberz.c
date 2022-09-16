#include <stdio.h>
/**
* main - functuon
* Description: print 0-9 but don't use cjar
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	int c;

	c = 48;

	while (c >= 48 && c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

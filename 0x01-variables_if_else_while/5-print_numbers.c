#include <stdio.h>
/**
* main - function
* Description: it print 0-9
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	char c;

	c = '0';

	while (c >= '0' && c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

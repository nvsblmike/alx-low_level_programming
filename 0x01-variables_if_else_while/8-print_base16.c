#include <stdio.h>
/**
* main - function
* Description: it prints hex values
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	char c;
	char d;

	c = '0';
	d = 'a';

	while (c >= '0' && c <= '9')
	{
		putchar(c);
		c++;
	}
	while (d >= 'a' && d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

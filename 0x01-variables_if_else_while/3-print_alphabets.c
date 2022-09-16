#include <stdio.h>
/**
* main - function
* Description: prints alphabets
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';

	while (c >= 'a' && c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d >= 'A' && d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

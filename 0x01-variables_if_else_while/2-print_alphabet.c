#include <stdio.h>
/**
* main - function
* Description: a program that prints the alphabet in lower case
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	char c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main - function
* Description: prunt alphabet in reverse
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	char c;

	c = 'z';

	while (c <= 'z' && c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

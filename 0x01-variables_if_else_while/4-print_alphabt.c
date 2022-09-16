#include <stdio.h>
/**
* main - function
* Description: prints alphabets except e and q
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	char c;

	c = 'a';

	while (c >= 'a' && c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

/**
* main - function
* Description: it prints a string
* @void: no parameter
* Return: always 0 (success)
*/

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}

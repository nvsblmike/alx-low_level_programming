#include "main.h"
/**
* _strlen_recursion - the function
* Description: it gets the length of a string
* @s: parameter
* Return: integer
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (s++ == '\0')
		return (n);
	else if (s++ != '\0')
		n++;
	i++;
	_strlen_recursion(s++);
}

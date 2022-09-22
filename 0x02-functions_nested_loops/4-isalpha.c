#include "main.h"
/**
* _isalpha - function
* Description: it checks for a-z
* @c: parameter
* Return: always sth
*/

int _isalpha(int c)
{
	if (c <= 'a' && c >= 'Z')
		return (1);
	else
		return (0);
}

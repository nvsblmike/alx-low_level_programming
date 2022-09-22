#include "main.h"
/**
* _islower - function
* Description: it checks for kower case chars
* @c: parameter
* Return: always sth
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"
/**
* _abs - function
* Description: it removes signs
* @n: parameter
* Return: always sth
*/

int _abs(int n)
{
	int r;
	int v;

	r = 0;
	v = -1;

	if (n < 0)
	{
		r = n * v;
		return (r);
	}
	else
		return (n);
}

#include "main.h"
/**
* print_last_digit - function
* Description: it prints last digit of a number
* @n: parameter
* Return: always 0
*/

int print_last_digit(int n)
{
	int f, g;

	f = n % 10;
	g = f * 11;
	return (g);
}

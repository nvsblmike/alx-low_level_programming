#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - function
* Description: it
* @void: no parameter
* Return: always 0
*/

int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	/* your code goes there */
	if (b > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	}
	else if (b < 6 && b > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	else if (b == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, b);
	}
	else if (n < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	return (0);
}

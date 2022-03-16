#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Prints if number is positive, zero or negative
*Return: Nothing
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/**
*int - showing that it's an integer value
*srand: function for random number
*n is compared with 0
*/
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
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
*/
/**
* it is for probabs
*/
if (n > 0){
printf("%d is positive\n", n);
}
else if (n == 0){
printf("%d is zero\n", n);
}
else{
printf("%d is negative\n", n);
}
return (0);
}

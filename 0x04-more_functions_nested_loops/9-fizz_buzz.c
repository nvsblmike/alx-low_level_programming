#include <stdio.h>
/**
*main - this is the function
*Description: if you don't know main, then I'm afraid
*@void: no parameter
*Return: Always 0(success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
putchar(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
putchar(' ');
}
else if (i % 3 == 0)
{
printf("Fizz");
putchar(' ');
}
else
{
printf("%d", i);
putchar(' ');
}
}
putchar('\n');
return (0);
}

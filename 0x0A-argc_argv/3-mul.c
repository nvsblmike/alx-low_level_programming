#include "main.h"
#include <stdio.h>
/**
* main - the function
* Description: it multiplies two ints
* @argc: parameter
* @argv: parameter
* Return: 0
*/
int main(int argc, char *argv[])
{
int xply = 0;
if (argc > 1)
{
xply = argv[1] * argv[2];
printf("%d\n", xply);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

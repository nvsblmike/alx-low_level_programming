#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - yhe function
* Description: it adds positive numbers
* @argc: parameter
* @argv: parameter
* Return: 0
*/
int main(int argc, char *argv[])
{
int positive = 0, i;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
positive = positive + atoi(argv[i]);
}
if (atoi(argv[i]) >= 'A' && atoi(argv[i]) <= 'z')
{
printf("Error");
return (1);
}
printf("%d\n", positive);
}
else if (arg < 2)
{
printf("0");
}
return (0);
}

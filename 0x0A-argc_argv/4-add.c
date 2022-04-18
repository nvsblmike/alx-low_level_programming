#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - the function
* Description: it adds positive numbers
* @argc: parameter
* @argv: parameter
* Return: 0
*/
int main(int argc, char *argv[])
{
int positive = 0, i, gp;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) < '0' && atoi(argv[i]) > '9')
{
printf("Error");
return (1);
}
positive = positive + atoi(argv[i]);
}
printf("%d\n", positive);
}
else if (argc < 2)
{
gp = 0;
printf("%d\n", gp);
}
return (0);
}

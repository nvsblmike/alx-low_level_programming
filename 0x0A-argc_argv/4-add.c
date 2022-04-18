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
int j = 0;
int positive = 0, i, gp;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
if (argv[i][j] < '0' && argv[i][j] > '9')
{
printf("Error");
return (1);
j++;
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

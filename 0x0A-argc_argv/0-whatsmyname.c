#include "main.h"
#include <stdio.h>
/**
* main - the function
* Description: it prints the name of the program
* @argc: parameter
* @argv: parameter
* Return: 0
*/
int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}

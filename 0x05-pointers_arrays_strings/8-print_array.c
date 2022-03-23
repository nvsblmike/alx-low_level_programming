#include <stdio.h>
#include "main.h"
/**
*print_array - qwertyui
*Description: FUnction that prinnts elements in an array
*@n: parameter
*@a: parameter
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d\n",a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
}

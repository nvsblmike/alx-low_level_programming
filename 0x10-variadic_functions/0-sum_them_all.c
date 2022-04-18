#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - the function
* Description: it adds the arguments of a function
* @n: parameter
* @...: parameters
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
va_list arglist;
int i;
int result = 0;
va_start(arglist, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
;
result = va_arg(arglist, int);
va_end(arglist);
return (result);
}

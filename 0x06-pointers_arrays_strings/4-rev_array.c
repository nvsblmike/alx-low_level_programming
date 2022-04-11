#include "main.h"
/**
* reverse_array - the function
* Description: it reberses an array
* @a: parameter
* @n: parameter
* Returrn: nothing
*/
void reverse_array(int *a, int n)
{
int i;
int rev;
for (i = 0; i < (n / 2); i++)
{
rev = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = rev;
}
}

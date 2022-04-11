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
int i = 0;
int len;
int b[n];
int y;
while (a[y] != '\0')
{
y++;
}
for (len = 0; n > i; len++, n--)
{
b[len] = a[n];
}
for (i = 0, len = 0; i < y; i++, len++)
{
a[i] = b[len];
}
}

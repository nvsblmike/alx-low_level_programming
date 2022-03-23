#include "main.h"
/**
*rev_string - ertyuio
*Description: edrftgyhuik
*@s: dfghj
*/
void rev_string(char *s)
{
int a, b, len, temp, lastindex;
a = 0;
while (s[a] != '\0')
{
a++;
}
len = a;
lastindex = len - 1;
for (b = 0; b < len / 2; b++)
{
temp = s[b];
s[b] = s[lastindex];
s[lastindex--] = temp;
}
}

#include "main.h"
/**
*puts2 - edrtgyhuj
*Description: etrgtyhuu
*@str: yrdtfygouiygfut
*/
void puts2(char *str)
{
int j, len;
int i = 0;
while (str[i] != '\0')
{
i++;
}
len = i;
for (j = 0; j < len; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}

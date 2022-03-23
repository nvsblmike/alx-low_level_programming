#include "main.h"
/**
*puts_half - the function
*Description: It prints the second half of a string 
*@str: parameter that receives passed argument
*/
void puts_half(char *str)
{
int a, b, len, startindex, endindex;
a = 0;
while (str[a] != '\0')
{
a++;
}
len = a;
endindex = len - 1;
startindex = (endindex / 2) + 1;
for (b = startindex; b < len; b++)
{
_putchar(str[b]);
}
_putchar('\n');
}

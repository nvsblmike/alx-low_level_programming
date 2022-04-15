#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - the function
* Description: it prints a var of struct dog
* @d: parameter
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (*name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %.6f\n", d->age);
if (*owner == NULL)
{
printf("Owner: (nil)");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
else if (d == NULL)
{
printf("%s\n", d->name);
printf("%s\n", d->owner);
}
}

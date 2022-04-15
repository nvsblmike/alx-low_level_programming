#include "dog.h"
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
if (d->name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->age == NULL)
{
printf("Age: (nil)");
}
else
{
printf("Age: %f\n", d->age);
}
if (d->owner == NULL)
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
printf("");
}
}

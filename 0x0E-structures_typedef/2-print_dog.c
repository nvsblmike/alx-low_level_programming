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
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}

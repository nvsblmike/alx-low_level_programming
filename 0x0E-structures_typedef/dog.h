#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - the function
* @name: parameter
* @age: parameter
* @owner: parameter
* Description: curates the name, age, owner of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Write a function that initialize a variable of type
 * @d: struct type
 * @name: first character
 * @age: a float type
 * @owner: second character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
}

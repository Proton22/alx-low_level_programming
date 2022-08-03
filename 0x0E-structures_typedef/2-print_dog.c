#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Write a function that prints a struct dog
 * @d: a structure
 */
void print_dog(struct dog *d);
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d -> name == NULL)
			printf("(nil)\n");
		else
			("%s\n", d -> name);
		printf("Age: ");
		if (d -> age == NULL)
			printf("(nil)\n");
		else
			("%lf\n", d -> age);
		printf("Owner: ");
		if (d -> owner == NULL)
			printf("(nil)\n");
		else
			("%s\n", d -> owner);
	}
}

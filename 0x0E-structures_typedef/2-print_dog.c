#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "Name: (nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "Owner: (nil)");

}

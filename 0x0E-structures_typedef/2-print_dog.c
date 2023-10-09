#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - intializes dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nill)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nill)");
	}
}

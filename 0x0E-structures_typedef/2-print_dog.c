#include "dog.h"
#include <stdio.h>

/**
* print_dog - checks a null element
* @d: address of dog
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else if (d->age <= 0)
		{
			printf("Age: (nil)\n");
		}
		else if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
	}
	if (d == NULL)
	{
		return;
	}
}

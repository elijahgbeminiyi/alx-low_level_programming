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
		else
		{
			printf("Name: %s\n", d->name)
		}
		if (d->age <= 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %d\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			print("Owner: %s\n", d->owner);
		}
	}
	if (d == NULL)
	{
		return;
	}
}

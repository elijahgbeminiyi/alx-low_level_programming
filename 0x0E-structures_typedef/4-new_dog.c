#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *str;
	char *tmp1, *tmp2;

	tmp1 = malloc(sizeof(name) + 1);
	if (tmp1 == NULL)
		return (NULL);
	tmp1 = name;

	tmp2 = malloc(sizeof(owner) + 1);
	if (tmp2 == NULL)
		return (NULL);
	tmp = owner;

	str = malloc(sizeof(dog_t));
	if (str == NULL)
		return (NULL);
	str->name = name;
	str-owner = owner;
	str->age = age;
	return (str);
}

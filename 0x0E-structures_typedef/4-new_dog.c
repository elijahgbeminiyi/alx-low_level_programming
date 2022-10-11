#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: returns what i dont know
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *str;
	char *tmp1, *tmp2;
	int i, j, k, l;

	i = 0;
	j = 0;
	while (name[i])
		i++;
	while (owner[j])
		j++;

	tmp1 = malloc(i * sizeof(name) + 1);
	if (tmp1 == NULL)
		return (NULL);

	k = 0;
	while (k < i)
		tmp1[k] = name[k];
		k++;

	tmp2 = malloc(j * sizeof(owner) + 1);
	if (tmp2 == NULL)
		return (NULL);

	l = 0;
	while (l < j)
		tmp2[l] = owner[l];
		l++;

	str = malloc(sizeof(dog_t));
	if (str == NULL)
		return (NULL);
	str->name = name;
	str-owner = owner;
	str->age = age;
	return (str);
}

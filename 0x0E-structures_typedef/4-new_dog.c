#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer dog struct
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *strArr;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	strArr = (char *) malloc(len * sizeof(char) + 1);
	if (strArr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strArr[i] = str[i];
	}
	strArr[i] = '\0';

	return (strArr);
}

/**
 * new_dog - create a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * * Return: to an new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *dogName, *dogOwner;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	dogName = _strdup(name);
	if (dogName == NULL)
	{
		free(newDog);
		return (NULL);
	}

	dogOwner = _strdup(owner);
	if (dogOwner == NULL)
	{
		free(dogName);
		free(newDog);
		return (NULL);
	}
	newDog->name = dogName;
	newDog->age = age;
	newDog->owner = dogOwner;
	return (newDog);
}

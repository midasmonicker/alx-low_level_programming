#include "dog.h"
/**
 * init_dog - function that initialises a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name
 * @age: pointer to float age
 * @owner: pointer to char owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

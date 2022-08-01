#ifndef DOG
#define DOG

/**
 * struct dog - structure for a dog object
 * @name: element for name
 * @owner: element for owner
 * @age: element for age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: Define a new type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
#endif

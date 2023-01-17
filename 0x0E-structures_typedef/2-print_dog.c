#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints dog
 * @d: the struct dog to be printed
 * Return: no
 */

oid print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		pritf("Age: %f\n", d->age)
		printf("Owner: ")
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}

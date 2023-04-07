#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: is the size of array
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);
	return (hash_val % size);
}

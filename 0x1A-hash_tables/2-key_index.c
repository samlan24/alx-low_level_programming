#include "hash_tables.h"
/**
 * key_index - get's the index at which an item will be stored
 * @key: the key of the key/value pairing
 * @size: size of the array
 * Return: returns the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

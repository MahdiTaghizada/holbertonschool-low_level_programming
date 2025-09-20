#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key to get the index for
 * @size: size of the hash table array
 *
 * Return: index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

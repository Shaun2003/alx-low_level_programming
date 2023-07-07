#include "hash_tables.h"

/**
 * key_index - get index at which a key
 * pair should be stored in array of hash table
 * @key: key to get index
 * @size: size of array of hash table
 *
 * Return: index of key
 * Description: uses djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

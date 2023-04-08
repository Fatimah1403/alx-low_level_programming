#include "hash_tables.h"


/**
 * key_index - A function that gives the index of a key
 * @size: The size of the array
 * @key: The key of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}

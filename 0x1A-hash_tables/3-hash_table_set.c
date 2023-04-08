#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: Hash table
 * @key: The key of the array
 * @value: Value associated with the key
 *
 * Return: 1 on success ,otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i, index;
	char value_copy;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i], i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value, value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);

	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);

	}
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

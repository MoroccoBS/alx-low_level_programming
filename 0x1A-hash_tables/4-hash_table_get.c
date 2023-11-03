#include "hash_tables.h"

/**
 * hash_table_get - Returns the value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key.
 * Return: The value associated with the element,
 *  If the key cannot be found - NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (strdup(node->value));
		node = node->next;
	}

	return (NULL);
}

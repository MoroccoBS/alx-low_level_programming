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

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}

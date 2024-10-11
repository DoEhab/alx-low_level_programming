#include "hash_tables.h"

/**
  * hash_table_get - get certain value
  *
  * @ht: hash table
  * @key: the key to look for
  * Return: return the value for the passed key or NULL
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	int index = 0;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);

}

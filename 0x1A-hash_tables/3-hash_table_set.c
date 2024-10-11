#include "hash_tables.h"

/**
  * hash_table_set - set item in hash table
  *
  * @ht: hash table
  * @key: hash key
  * @value: item value
  *
  * Return: 0 in case of failure and 1 in success
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *hash_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL || hash_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
		free(hash_node);
		return (0);

	hash_node->value = strdup(value);
	if (hash_node->value == NULL)
		free(key);
		return (0);

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}

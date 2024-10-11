#include "hash_tables.h"

/**
  * hash_table_delete - deletes the hash table
  *
  * @ht: hash table
  * Return: return void
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp->next;
		}
	}
	free(ht->array);
	free(ht);
}

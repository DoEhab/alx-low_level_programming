#include "hash_tables.h"

/**
  * hash_table_print - print data in hash table
  *
  * @ht: hash table
  * Return: void
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;

	if (ht == NULL)
		printf("{}\n");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (node->next == NULL)
				printf("'%s' : '%s'", node->key, node->value);
			else
				printf("'%s' : '%s', ", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}

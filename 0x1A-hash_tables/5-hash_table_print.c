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
	int first = 1;
	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (!first)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				first = 0;
				node = node->next;
			}
		}
	}
	printf("}\n");
}

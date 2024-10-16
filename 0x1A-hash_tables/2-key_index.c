#include "hash_tables.h"

/**
  * key_index - return the index
  *
  * @key: hash key
  * @size: Array size
  * Return: the index
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

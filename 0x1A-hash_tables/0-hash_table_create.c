#include "hash_tables.h"
/**
 * hash_table_create - creates hashtable with given size
 *
 * @size: size hashtable
 * Return: the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	hash_node_t **array;
	unsigned long int i;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	tab->array = array;
	tab->size = size;
	return (tab);
}

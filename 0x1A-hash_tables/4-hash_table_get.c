#include "hash_tables.h"
/**
 * hash_table_get - retrieves value key
 *
 * @ht: pointer hashtable
 * @key: key hash
 * Return: value hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *t;
	unsigned long int kind;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || *key == '\0')
		return (NULL);
	kind = key_index((unsigned char *)key, ht->size);
	t = ht->array[kind];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
			return (t->value);
		t = t->next;
	}
	return (NULL);
}

#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hashtable
 * @key: key new element
 * @value: value new element
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newhashnode = NULL;
	hash_node_t *t = NULL;
	unsigned long int ind = 0;

	if (!ht || !key || !(*key) || !value)
		return (0);
	ind = key_index((unsigned char *)key, ht->size);
	t = ht->array[ind];
	while (t && strcmp(t->key, key) != 0)
		t = t->next;
	if (t)
	{
		free(t->value);
		t->value = strdup(value);
		return (1);
	}
	newhashnode = malloc(sizeof(*newhashnode));
	if (!newhashnode)
		return (0);
	newhashnode->key = strdup(key);
	newhashnode->value = strdup(value);
	newhashnode->next = ht->array[ind];
	ht->array[ind] = newhashnode;
	return (1);
}

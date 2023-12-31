#include "hash_tables.h"
/**
 * hash_table_delete - deletes hashtable
 * @ht: pointer hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *t1;
	hash_node_t *t2;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		t1 = ht->array[i];
		while ((t2 = t1) != NULL)
		{
			t1 = t1->next;
			free(t2->key);
			free(t2->value);
			free(t2);
		}
	}
	free(ht->array);
	free(ht);
}

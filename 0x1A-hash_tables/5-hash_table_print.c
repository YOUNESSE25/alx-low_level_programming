#include "hash_tables.h"
/**
 * hash_table_print - prints keys and values hashtable
 * @ht: pointer hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *t;
	char *s;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	s = "";
	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while (t != NULL)
		{
			printf("%s'%s': '%s'", s, t->key, t->value);
			s = ", ";
			t = t->next;
		}
	}
	printf("}\n");
}

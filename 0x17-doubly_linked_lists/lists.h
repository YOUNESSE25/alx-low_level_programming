#ifndef LIST_H
#define LIST_H
#include<stddef.h>


/**
 * struct dlistint_s - doubly linked
 * @n: integer
 * @prev: previous node
 * @next: next node
 * description: struc of d linked list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif

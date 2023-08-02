#include"lists.h"

const listint_t **nloc(const listint_t **list, size_t size,
		const listint_t *new);
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer
 *
 * Return: numb
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	size_t numb = 0;
	const listint_t **list = NULL;

	while (head)
	{
		for (i = 0; i < numb; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (numb);
			}
		}
		numb++;
		list = nloc(list, numb, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (numb);
}
/**
 * nloc - new locat memory
 * @list: list
 * @size: new size list
 * @new: node to add
 * Return: pointer
 */
const listint_t **nloc(const listint_t **list, size_t size,
		const listint_t *new)
{
	const listint_t **n;
	size_t i;

	n = malloc(sizeof(listint_t *) * size);
	if (!n)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		n[i] = list[i];
	n[i] = new;
	free(list);
	return (n);
}

#include "monty.h"

/**
 * f_add - Adds top two elements on the stack.
 * @head: The stack head
 * @counter: The line number
 * Return: No return value
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

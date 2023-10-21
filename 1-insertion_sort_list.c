#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: the doubly linked list to sort
 */

void insertion_sort_list(listint_t **list)
{
listint_t *current;
if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
current = (*list)->next;
while (current != NULL)
{
listint_t *tmp = current;
while (current->prev != NULL && current->n < current->prev->n)
{
listint_t *prev = current->prev;
listint_t *prev_prev = prev->prev;
if (prev_prev != NULL)
{
prev_prev->next = current;
}
if (current->next != NULL)
{
current->next->prev = prev;
}
prev->next = current->next;
prev->prev = current;
current->next = prev;
current->prev = prev_prev;
if (prev == *list)
{
*list = current;
}
print_list(*list);
}
current = tmp->next;
}
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_list - list
 *  @head: list
 */

void free_list(list_t *head)
{
	 list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}

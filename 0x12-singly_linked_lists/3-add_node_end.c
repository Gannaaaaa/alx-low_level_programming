#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
list_t *node = *head;
unsigned int len = 0;

while (str[len])
len++;
if (!new || !head)
return (NULL);
if (str)
{
new->str = strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}
new->len = len;
}
if (node)
{
	while (node->next)
		node = node->next;
	node->next = new;
}
return (new);
}

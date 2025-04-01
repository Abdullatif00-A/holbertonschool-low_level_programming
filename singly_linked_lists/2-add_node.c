#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and add to the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
char *dup;
if (str == NULL)
return (NULL);
dup = strdup(str);
if (dup == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
{
free(dup);
return (NULL);
}
new->str = dup;
new->len = strlen(str);
new->next = *head;
*head = new;
return (new);
}

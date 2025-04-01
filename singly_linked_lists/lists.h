#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc’ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
char *str;
size_t len;
struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif


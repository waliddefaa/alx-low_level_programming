#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - add new node
 * @head: ptr to list
 * @str: str in node
 * Return: address
 */


list_t *add_node(list_t **head, const char *str)
{
list_t *i;
unsigned int z = 0;
while (str[z])
z++;
i = malloc(sizeof(list_t));
if (!i)
return (NULL);
i->str = strdup(str);
i->z = z;
i->next = (*head);
(*head) = i;
return (*head);
}

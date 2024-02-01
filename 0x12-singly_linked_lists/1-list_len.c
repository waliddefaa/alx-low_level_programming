#include "lists.h"


/**
 * list_len - Calc the num of elems
 * @h: Pointer to a list
 * Return: Int
 **/


size_t list_len(const list_t *h)
{
const list_t *a;
unsigned int z = 0;
a = h;
while (a)
{
z++;
a = temp->next;
}
return (z);
}

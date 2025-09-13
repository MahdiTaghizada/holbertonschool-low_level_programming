#include "lists.h"
#include <stdef.h>
#include <stdio.h>

size_t list_len(const list_t *h)
{
    int n=0;
    while (h != NULL)
    {
        n++;
        h=h->next;
    }
    return(n);
}
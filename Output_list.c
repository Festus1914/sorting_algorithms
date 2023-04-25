#include <stdio.h>
#include "sort.h"

/**
 * Output_list - Outputting the integer
 *
 * @list: The list to be printed
 */
void Output_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

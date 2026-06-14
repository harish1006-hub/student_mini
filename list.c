#include "header.h"

void list_students()
{
    STUDENT *temp = head;

    if(head == NULL)
    {
        printf("No Records Found\n");
        return;
    }

    printf("\n-----------------------------------\n");

    printf("ID\tNAME\t\tMARKS\n");

    printf("-----------------------------------\n");

    while(temp)
    {
        printf("%d\t%s\t\t%.2f\n",
        temp->id,
        temp->name,
        temp->marks);

        temp = temp->next;
    }
}

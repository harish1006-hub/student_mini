#include "header.h"

void delete_student()
{
    int id;

    printf("Enter ID to Delete: ");
    scanf("%d",&id);

    STUDENT *temp = head;
    STUDENT *prev = NULL;

    while(temp)
    {
        if(temp->id == id)
        {
            if(prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            free(temp);

            printf("Student Deleted\n");

            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Student Not Found\n");
}

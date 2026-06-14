#include "header.h"

void add_student()
{
    STUDENT *new = malloc(sizeof(STUDENT));

    printf("Enter ID: ");
    scanf("%d",&new->id);

    printf("Enter Name: ");
    scanf(" %[^\n]",new->name);

    printf("Enter Marks: ");
    scanf("%f",&new->marks);

    new->next = NULL;

    if(head == NULL)
    {
        head = new;
    }
    else
    {
        STUDENT *temp = head;

        while(temp->next)
            temp = temp->next;

        temp->next = new;
    }

    printf("Student Added Successfully\n");
}

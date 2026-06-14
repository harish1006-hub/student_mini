#include "header.h"

void read_students()
{
    FILE *fp = fopen("student.csv","r");

    if(fp == NULL)
        return;

    char line[200];

    fgets(line,sizeof(line),fp);

    while(1)
    {
        STUDENT *new = malloc(sizeof(STUDENT));

        if(fscanf(fp,"%d,%49[^,],%f\n",
        &new->id,
        new->name,
        &new->marks) != 3)
        {
            free(new);
            break;
        }

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
    }

    fclose(fp);
}

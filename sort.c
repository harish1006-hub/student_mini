#include "header.h"

void sort_students()
{
    if(head == NULL)
    {
        printf("No Records\n");
        return;
    }

    STUDENT *i;
    STUDENT *j;

    for(i=head;i!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->marks < j->marks)
            {
                int tid;
                char tname[50];
                float tmarks;

                tid = i->id;
                i->id = j->id;
                j->id = tid;

                strcpy(tname,i->name);
                strcpy(i->name,j->name);
                strcpy(j->name,tname);

                tmarks = i->marks;
                i->marks = j->marks;
                j->marks = tmarks;
            }
        }
    }

    printf("Students Sorted by Marks\n");
}

#include "header.h"

void save_students()
{
    FILE *fp = fopen("student.csv","w");

    if(fp == NULL)
    {
        printf("File Error\n");
        return;
    }

    STUDENT *temp = head;

    fprintf(fp,"ID,Name,Marks\n");

    while(temp)
    {
        fprintf(fp,"%d,%s,%.2f\n",
        temp->id,
        temp->name,
        temp->marks);

        temp = temp->next;
    }

    fclose(fp);

    printf("Data Saved Successfully\n");
}

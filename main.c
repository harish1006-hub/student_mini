#include "header.h"

STUDENT *head = NULL;

int main()
{
    int op;

    read_students();

    while(1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");

        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. List Students\n");
        printf("4. Sort Students\n");
        printf("5. Save\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                add_student();
                break;

            case 2:
                delete_student();
                break;

            case 3:
                list_students();
                break;

            case 4:
                sort_students();
                break;

            case 5:
                save_students();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }
}

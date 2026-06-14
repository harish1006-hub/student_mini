#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
    int id;
    char name[50];
    float marks;

    struct student *next;

}STUDENT;

extern STUDENT *head;

void add_student();
void delete_student();
void list_students();
void sort_students();

void save_students();
void read_students();

#endif

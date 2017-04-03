//Structure

#include<stdio.h>
#include<string.h>
struct student{
char aray[50];
int value;

};


void swap(struct student *cls1,struct student *cls2);


int main()
{

    struct student cls1,cls2;
    printf("Enter Student Name and Roll : ");
    scanf("%s%d",cls1.aray,&cls1.value);
    printf("\nEnter second student name and roll : ");
    scanf("%s%d",cls2.aray,&cls2.value);
    if(cls2.value>cls1.value)
        swap(&cls1,&cls2);
    printf("\nName : %s roll : %d",cls1.aray,cls1.value);
    printf("\nName : %s roll : %d",cls2.aray,cls2.value);
    return 0;
}

void swap(struct student *cls1,struct student *cls2)
{
    struct student sap;
    /*strcpy(sap.aray,cls1->aray);
    sap.value = cls1->value;

    strcpy(cls1->aray,cls2->aray);
    cls1->value = cls2->value;

    strcpy(cls2->aray,sap.aray);
    cls2->value = sap.value;*/


    sap=*(cls1);
    *(cls1)=*(cls2);
    *(cls2)=sap;
}

// To access the member of structure using pointter  we have to replace " -> " with "." operator


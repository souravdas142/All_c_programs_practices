#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct clas
{
    char name[50];
    int roll;
    int marks[3];
    int total;
    char grade;
}student;
int main()
{
    int n;
    student *students=NULL;
    printf("How many students ? ");
    scanf("%d",&n);
    students=(student *)calloc(n,sizeof(student));
    int i;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\nStudents Name : ");
        scanf("%[^\n]",(students+i)->name);

        printf("Roll No : ");
        scanf("%d",&(students+i)->roll);
        printf("Math : ");
        scanf("%d",&(students+i)->marks[0]);
        printf("Science : ");
        scanf("%d",&(students+i)->marks[1]);
        printf("English : ");
        scanf("%d",&(students+i)->marks[2]);
        (students+i)->total=(students+i)->marks[0]+(students+i)->marks[1]+(students+i)->marks[2];
        int ave=(int)((students+i)->total)/3;
        if(ave>=75)
            (students+i)->grade='A';
        else if(ave>=60 && ave<75)
            (students+i)->grade='B';
        else
            (students+i)->grade='C';

    }
    for(i=0;i<n;i++)
    {
        printf("\nName : %s",(students+i)->name);
        printf("\nRoll : %d",(students+i)->roll);
        printf("\nMath : %d",(students+i)->marks[0]);
        printf("\nScience : %d",(students+i)->marks[1]);
        printf("\nEnglish : %d",(students+i)->marks[2]);
        printf("\nGrade : %c",(students+i)->grade);
        printf("\n\n");
    }


    return 0;
}


#include<string.h>
#include<stdio.h>
struct student
{
    char name[50];
    int class;
    int roll;
    struct birth
    {
        int day;
        int month;
        int year;
    }dob;
};
int main()
{

    struct student stdnt[2];
    strcpy(stdnt[0].name,"Sourav Das");
    stdnt[0].class=12;
    stdnt[0].roll=1;
    stdnt[0].dob.day=28;
    stdnt[0].dob.month=05;
    stdnt[0].dob.year=1997;

    strcpy(stdnt[1].name,"John Abraham");
    stdnt[1].class=5;
    stdnt[1].roll=63;
    stdnt[1].dob.day=13;
    stdnt[1].dob.month=07;
    stdnt[1].dob.year=1991;

    printf("\nstudent[1] = %s",stdnt[1].name);
    printf("\nStudent[1] = %d / %d / %d\n\n",stdnt[1].dob.day,stdnt[1].dob.month,stdnt[1
           ].dob.year);

    printf("\nstudent[0] = %s",stdnt[0].name);
    printf("\nStudent[0] = %d / %d / %d",stdnt[0].dob.day,stdnt[0].dob.month,stdnt[0].dob.year);

    return 0;



}


#include<stdio.h>
struct cst2y{
    // structure member
    char name[20];
    int stid;
    double cgpa;
    };
int main()
{

    // we are going to program in c about structure
    struct cst2y student;
    printf("Enter student name : ");
    gets(student.name);
    printf("\nEnter student ID : ");
    scanf("%d",&student.stid);
    printf("\n Enter CGPA score : ");
    scanf("%lf",&student.cgpa);

    printf("\n\n");
    printf("Student name : %s \n Student ID : %d \n student cgpa score : %lf",student.name,student.stid,student.cgpa);

    return 0;
}

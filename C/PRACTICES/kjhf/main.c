
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
    fflush(stdin);
    printf("\n Enter CGPA score : ");
    scanf("%lf",&student.cgpa);
   // for(int i=0;i<6;i++)
        //printf("hello\n");
    printf("\n\n");
    printf("Name : %s\nID : %d\nCGPA Score : %lf",student.name,student.stid,student.cgpa);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INSERTT 4 // Macro has been declrared

// Declear Structure
struct cst2y{
    // structure members
    char name[20];
    int stid;
    double cgpa;
    };

    // Declear structure function prototype

    void input(struct cst2y x[]);
    void output(struct cst2y y[]);
    void namesort(struct cst2y student[]);
    void idsort(struct cst2y m[]);
    void cgpasort(struct cst2y k[]);

    // starting of main function
int main()
{
    struct cst2y student[INSERTT];
    int choose1;
    char choose2;
    input(student);
    while(1)
    {
        printf("\nHow you want Sort ?: ");
        printf("\n\t\tPress 1 for Name_Sort :\n\t\tPress 2 for Student_ID Sort: \n\t\tPress\
 3 for CGPA SCORE Sort: \nPLEASE PRESS (Press '0' to exit) : ");
        scanf("%d",&choose1);
        switch(choose1)
        {

        case 1:
            namesort(student);
            output(student);
            break;
        case 2:
            idsort(student);
            output(student);
            break;
        case 3:
            cgpasort(student);
            output(student);
            break;
        default :
            printf("\nYou have entered Wrong input ");
            break;
        }



        while(1)
        {
            fflush(stdin);
            printf("\nDo you want to continue ? (Y or N) : ");
            scanf("%c",&choose2);
            if(choose2=='y' || choose2 =='Y')
           {
            system("cls");
            break;
           }
            else if(choose2=='n' || choose2=='N')
            return 1;
            else
            printf("\nYOU have Entered wrong input");
        }

    }



    return 0;
}

// Function to take input from user
void input(struct cst2y student[])
{
    printf("\n****************** INPUT ******************\n");
 for(int i=0; i<INSERTT; ++i)
    {
        printf("Enter student[%d] name : ",i+1);
        gets(student[i].name);
        fflush(stdin);
        printf("Enter student[%d] ID : ",i+1);
        scanf("%d",&student[i].stid);
        fflush(stdin);
        printf("Enter Student[%d] CGPA score : ",i+1);
        scanf("%lf",&student[i].cgpa);
        fflush(stdin);
        printf("\n\n");
    }

}

// Function to sort As namesort

void namesort(struct cst2y student[])
{
    struct cst2y temp;

    int i,j;
    for(i=0;i<INSERTT;i++)
    {
        for(j=i+1;j<INSERTT;j++)
        {

            if((strcmp(student[i].name,student[j].name))>0)
            {
                strcpy(temp.name,student[i].name);
                temp.stid=student[i].stid;
                temp.cgpa=student[i].cgpa;

                strcpy(student[i].name,student[j].name);
                student[i].stid=student[j].stid;
                student[i].cgpa=student[j].cgpa;

                strcpy(student[j].name,temp.name);
                student[j].stid=temp.stid;
                student[j].cgpa=temp.cgpa;
            }

        }
    }
}

// output function for the program

void output(struct cst2y student[])
{
      printf("\n****************** OUTPUT *******************\n");
    int i;
    for(i=0;i<INSERTT;i++)
    {
        printf("Name : %s",student[i].name);
        printf("\nID : %d",student[i].stid);
        printf("\nCGPA Score : %.2lf",student[i].cgpa);
        printf("\n\n");
    }
}

// CGPA function for the program

void cgpasort(struct cst2y student[])
{
    struct cst2y temp;
    int i,j;
    for(i=0;i<INSERTT;i++)
    {
        for(j=i+1;j<INSERTT;j++)
        {
           if(student[i].cgpa>student[j].cgpa)
           {
             strcpy(temp.name,student[i].name);
                temp.stid=student[i].stid;
                temp.cgpa=student[i].cgpa;

                strcpy(student[i].name,student[j].name);
                student[i].stid=student[j].stid;
                student[i].cgpa=student[j].cgpa;

                strcpy(student[j].name,temp.name);
                student[j].stid=temp.stid;
                student[j].cgpa=temp.cgpa;
           }
        }
    }
}

// function for student id sort

void idsort(struct cst2y student[])
{
    struct cst2y temp;
    int i,j;
    for(i=0;i<INSERTT;i++)
    {
        for(j=i+1;j<INSERTT;j++)
        {
           if(student[i].stid>student[j].stid)
           {
             strcpy(temp.name,student[i].name);
                temp.stid=student[i].stid;
                temp.cgpa=student[i].cgpa;

                strcpy(student[i].name,student[j].name);
                student[i].stid=student[j].stid;
                student[i].cgpa=student[j].cgpa;

                strcpy(student[j].name,temp.name);
                student[j].stid=temp.stid;
                student[j].cgpa=temp.cgpa;
           }
        }
    }
}

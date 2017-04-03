/*                  ******************* PROGRAM DESCRIPTION *******************

     Here we will calculate of marks for each of student and soring them as total                       */



#include<stdio.h> //input output
#include<stdlib.h> // malloc,calloc,realloc,free
#include<string.h> // strcpy,strlen
#include<math.h> // for malloc if we input negative number it will convert it in positve
#define SIZE 50
#define UNITS 4
struct student
{
    char name[SIZE];
    int roll;
    struct subject{        //NESTED STRUCTURE
    int math;
    int sci;
    int eng;
    int geo;
    int beng;
    int hist;
    //int total;        For Each UnitTest to calculate total will be will be a huge calculation
    //int average;      For Each Average to calculate Average will be a huge Caculation
    }unit[UNITS];     // unit test in year of each 20 marks;

};

int mod(int block);
void add(struct student *students,int block);

int main()
{
    int block;

    struct student *students=NULL;
    printf("\nEnter how many students : ");
    scanf("%d",&block);
    students=(struct student*)realloc(NULL,(mod(block)*sizeof(struct student)));  // mod function convert (-ve) to (+ve)
    while(1){                                                                    // for Testing We are using realloc instead of malloc
        if(!students){
        printf("Memory can't allocate somehow :(");
        students=(struct student *)realloc(NULL,(mod(block)*sizeof(struct student)));
        break;
        }
        else{
            printf("Memory Allocate Successful \n\n");
            break;
        }
    }
    add(students,mod(block));
    students=(struct student *)realloc(students,0*(mod(block)*sizeof(struct student))); // For Testing we are using realloc instead of free
    return 0;
}

int mod(int block)
{
    return sqrt(pow(block,2));
}

void add(struct student *students,int block)
{
    int i,j;
    for(i=0;i<block;i++)
    {
        printf("\n\n ************************************ INPUT **********************************\n\n");
        printf("*********************** Enter Students[%d] *********************\n\n",i+1);
        printf("Enter Name : ");
        scanf(" %[^\n]",(students+i)->name);
        printf("Enter Roll NO : ");
        scanf("%d",&(students+i)->roll);
        printf("\nEnter Subjects : \nMath \nSci \nEng \nGeo \nBeng \nHist \n\n");
       for(j=0;j<UNITS;j++)
       {
        printf("\nEnter UnitTest[%d]\n\n",j+1);
        scanf("%d",&(students+i)->unit[j].math);
        scanf("%d",&(students+i)->unit[j].sci);
        scanf("%d",&(students+i)->unit[j].eng);
        scanf("%d",&(students+i)->unit[j].geo);
        scanf("%d",&(students+i)->unit[j].beng);
        scanf("%d",&(students+i)->unit[j].hist);
       }
    }

    printf("\n\n\n *************************************** OUTPUT ****************************************\n\n\n");

    for(i=0;i<block;i++)
    {
        printf("\n\n****************For Student[%d] **************************\n",i+1);
        printf("Name : %s\n",(students+i)->name);
        printf("Roll No. : %d",(students+i)->roll);
        for(j=0;j<UNITS;j++)
        {
            printf("\n****For unitTest[%d]****\n\n",j+1);
            printf("Math : %d\n",(students+i)->unit[j].math);
            printf("Sci : %d\n",(students+i)->unit[j].sci);
            printf("Eng : %d\n",(students+i)->unit[j].eng);
            printf("Geo : %d\n",(students+i)->unit[j].geo);
            printf("Beng : %d\n",(students+i)->unit[j].beng);
            printf("Hist : %d\n",(students+i)->unit[j].hist);
            //(students+i)->unit[j].total= ..........+......... +........... +......... ++ (huge)
            //students+i)->unit[j].average= ..........+......... +........... +......... ++ (huge)/6;
        }

    }
}

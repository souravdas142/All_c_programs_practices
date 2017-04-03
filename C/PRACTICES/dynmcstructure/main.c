// We can use dynamic structure as we can use dynamic array


#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
struct student{
char name[SIZE];
int roll;

};
int sum(int *a,int *b);
int main()
{
    int a=4,b=5;
    int (*sum1)(int *,int *);
    sum1=sum;

    struct student *p;
    p=(struct student *)realloc(NULL,sizeof(struct student));
    printf("Enter Name : ");
    scanf("%[^\n]",p->name);
    printf("Enter roll Number : ");
    scanf("%d",&p->roll);

    printf("\n\n\n After performing all things : \n");

    printf("Name : %s %d\n\n",p->name,p->roll);
    p=(struct student *)realloc(p,0*sizeof(struct student));
    sum1(&a,&b);

    return 0;


}

int sum(int *a,int *b)
{
    int c=(*a)+(*b);
    printf("%d",c);
    return c;
}

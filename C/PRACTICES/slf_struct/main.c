
// **************** Program Task : Create nodes of Link List As User Want
// **************** Take Data from users and impliment on linklist

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main()
{

    struct node *start=NULL,*end=NULL,*new=NULL;
    int num;
    while(1){
        printf("Create a node to input data : ");
        scanf("%d",&num);
        if(num==-1)
            break;
        if(start== NULL && end==NULL)
        {
            new = (struct node *)malloc(sizeof(struct node));
            new->data=num;
            new->next=NULL;
            start=end=new;
            printf("\n Start %p",start);
            printf("\n End %p",end

                   );
            printf("\n New %p",new);
        }
        else
        {
            new = (struct node *)malloc(sizeof(struct node));
            new->data=num;
            new->next=NULL;
            end=new;
        }
    }

    while(new->next!=NULL)
    {
        printf("\n data = %d",new->data);

    }

    return 0;

}

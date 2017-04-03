#include<stdio.h>
#include<stdlib.h>
struct self_ref{
    char name[50];
    struct self_ref *next;

};
void print(struct self_ref *node);

int main()
{
    struct self_ref *node=NULL;
    int num,i;
    printf("How many numbers ? : ");
    scanf("%d",&num);
    node=(struct self_ref *)(calloc(num,sizeof(struct self_ref)));
    if(!node)
    {
        printf("\nCan't Allocate memory");
        return 1;
    }
    else
        printf("\nAllocate successful \n");

    for(i=0;i<num;i++){
        fflush(stdin);
        printf("\n Enter Name[%d] : ",i+1);
        scanf("%[^\n]",(node+i)->name);
        if(i==num-1)
        {
            (node+i)->next=NULL;
        }
        else
        (node+i)->next=(i+1+node);

                    }
          printf("1st node next : %p\n",node+2);
          printf("1st node next : %p\n",(node+2)->next);
        printf("2nd node : %p\n\n",(node+3));
        printf("1st node next : %p\n",(node+3)->next);
       print(node);
        return 0;
}


    void print(struct self_ref *node)
    {
        printf("\n%s",node->name);


if(node->next==NULL)
            return;
        print(node->next);



    }





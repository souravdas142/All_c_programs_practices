#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}lnklst;
int main()
{
    lnklst *start=NULL,*end=NULL,*new_node=NULL,*accs=NULL,*dlt=NULL,*dtct=NULL;
    int num;
    while(1)
    {
        printf("Enter a number to create and insert in node : ");
        scanf("%d",&num);
        if(num==-1)
            break;
        else if(start==end && start==NULL)
        {
            new_node=(lnklst *)malloc(sizeof(lnklst));
            new_node->data=num;
            new_node->next=NULL;
            start=end=new_node;

        }
        else
        {
            new_node=(lnklst *)malloc(sizeof(lnklst));
            new_node->data=num;
            new_node->next=NULL;
            end->next=new_node;
            end=new_node;
        }
    }

    int conf;
    while(1)
    {
        printf("\nDo you want to increase it : ");
        scanf("%d",&conf);
        if(conf==1)
            break;
        else if(conf==2)
            return 1;
        else
            printf("\nYOU HAVE ENTERED WRONG INPUT : ");

    }
        while(1)
    {
        printf("Enter a number to create and insert in node : ");
        scanf("%d",&num);
        if(num==-1)
            break;

        else
        {
            new_node=(lnklst *)malloc(sizeof(lnklst));
            new_node->data=num;
            new_node->next=NULL;
            end->next=new_node;
            end=new_node;
        }
    }
        lnklst *print=NULL;
        print=start;
    while(1)
    {
        printf("\n data : %d",print->data);
        if(print->next==NULL)
            break;

        print=print->next;

    }

    int inspos;
    printf("\n Insert a node after a number : ");
    scanf("%d",&inspos);
    printf("\n Insert number ");
    scanf("%d",&num);
    accs=start;
    while(1)
    {



      if(accs->data==inspos)
      {
          new_node=(lnklst *)malloc(sizeof(lnklst));
          new_node->data=num;

          new_node->next=accs->next;
          accs->next=new_node;
          break;


      }
      accs=accs->next;

    }
    print=start;
    while(1)
    {
        printf("\n data : %d",print->data);
        if(print->next==NULL)
            break;

        print=print->next;

    }

    printf("\n Insert a node before a number : ");
    scanf("%d",&inspos);
    printf("\n Insert number ");
    scanf("%d",&num);
    accs=start;
    while(1)
    {



      if(accs->data==(inspos))
      {
          new_node=(lnklst *)malloc(sizeof(lnklst));
          if(dtct==NULL)
            start=new_node;
          new_node->data=num;
          new_node->next=accs;
          if(dtct!=NULL)
            dtct->next=new_node;
          break;


      }
      dtct=accs;
      accs=accs->next;

    }
    print=start;
    while(1)
    {
        printf("\n data : %d",print->data);
        if(print->next==NULL)
            break;

        print=print->next;

    }


    /* DELETE A NODE */


    printf("\n Delete a node after number : ");
    scanf("%d",&inspos);
    accs=start;
    while(1)
    {



      if(accs->data==(inspos))
      {
          if(accs->next==NULL)
          {
            printf("\nNumber can't be deleted..\n\n");
            break;
          }

        printf("\n\nAddress : %p",accs->next);
        printf("\n\nAddress : %p",(accs->next)->next);
        dlt=(accs->next)->next;
        free(accs->next);
        accs->next=dlt;
        printf("\n\nAddress : %p",accs->next);

          break;


      }
      accs=accs->next;
    }
        print=start;
    while(1)
    {
        printf("\n data : %d",print->data);
        if(print->next==NULL)
            break;

        print=print->next;

    }




    return 0;
}

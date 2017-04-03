/* ************* funcsd.h FILE ****************** */

typedef struct lnklst
{
    int data;
    struct lnklst *next;
}node;

node *start=NULL,*lst=NULL;

node *new_node()
{
    node *create=NULL;
   int str;
    printf("\n_________________ CREATE A LINK LIST ___________________\n");
        printf("\nEnter your data for node : ");
        scanf("%d",&str);


        while(1)
        {
            create=(node *)calloc(1,sizeof(node));
            if(!create)
                printf("\a\nUNFORTUNATELY MEMORY CAN'T ALLOCATE");
            else
                break;
        }
        create->data=str;
        create->next=NULL;
        return create;
}

int node_create()
{
    node *create=NULL;

   int chk,str;
    printf("\n_________________ CREATE A LINK LIST ___________________\n");
        printf("\nEnter your data for node : ");
        chk=scanf("%d",&str);
        if(chk==EOF)
            return EOF;
        while(1)
        {
            create=(node *)calloc(1,sizeof(node));
            if(!create)
                printf("\a\nUNFORTUNATELY MEMORY CAN'T ALLOCATE");
            else
                break;
        }
        create->data=str;
        create->next=NULL;
            if(start==NULL && lst==NULL)
            {
                start=lst=create;
            }
            else
            {
                lst->next=create;
                lst=create;
            }

        return chk;
}

void prntt()
{
    node *flag=NULL;
    printf("\n____________________ DATA IN LINK LIST _________________________");
    flag=start;
    while(1)
    {
        printf("\n%d",flag->data);
        flag=flag->next;
        if(flag==NULL)
            break;
    }

}

void insrt_before_num(int scn)
{
    node *hit=NULL,*fnd=NULL,*create=NULL;
    hit=fnd=start;
    while(1)
    {
        if(hit->data==scn)
            break;
        else
        {
            fnd=hit;
            hit=hit->next;
            if(hit==NULL){
                printf("\a\nThe number is not exist in list");
                return ;
            }
        }

    }
    create=new_node();
    if(fnd==start)
    {
        create->next=start;
        start=create;

    }
    else
    {
        create->next=fnd->next;
        fnd->next=create;
    }
}

void insrt_after_num(int num)
{
    node *scn=NULL,*create=NULL;
    scn=start;
    while(1)
    {
        if(scn->data==num)
            break;
        else
        {
            scn=scn->next;
            if(scn==NULL){
                printf("\n\aThe number is not exist in list");
                return ;
            }
        }

    }
    create=new_node();
    create->next=scn->next;
    scn->next=create;
}

void del_after_num(int num)
{
    node *scn=NULL,*del=NULL;
    scn=start;
    while(1)
    {
        if(scn->data==num)
            break;
        else
        {
            scn=scn->next;
            if(scn==NULL){
                printf("\a\nvalue can't find");
                return ;
            }

        }

    }
    if(scn==lst){
        printf("\a\nThere are no node that can be deleted");
        return ;
    }
    if((scn->next)->next==NULL)
        lst=scn;
    del=scn->next;
    scn->next=(scn->next)->next;
    free(del);
}


/*      BUBBLE SHORT

input

HOW MANY ELEMENTS?
N
ENTER ELEMENTS
N1,N2,N3......,NN
IN WHICH ORDER YOU WANT TO SHORT?
ALL DO IN FUNCTION
        A -- ASSENDING
        D -- DESENDING
OUTPUT

A/D -- N11,N22,N33.......,NNN
EXIT SUCCESSFULLY

*/

#include<stdio.h>
void cln_bfr();
void assending(int num[],int n);
void dessending(int num[],int n);
int main()
{

    int n,i,num[1000];
    char slct;
    printf("HOW MANY ELEMENTS ? ");
    scanf("%d",&n);

    printf("\n Enter Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    printf("\n Enter 'A' or 'a' for Assending order\t Enter 'D' or 'd' for\
 Dessending order \n IN WHICH ORDER YOU WANT TO SORT ? ");
    cln_bfr();
    scanf("%c",&slct);

    if(slct=='a' || slct=='A')
        assending(num,n);
    else if(slct=='d'||slct=='D')
        dessending(num,n);
    else
    {
        printf("\n you have entered wrong input");
        return 1;
    }
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("%4d",num[i]);
    return 0;

}

void assending(int num[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
}

void dessending(int num[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
}

void cln_bfr()
{
    int c;
    do{
        c=getchar();
    }while(c !='\n' && c != EOF);

}

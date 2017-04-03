#include<stdio.h>
int main()
{

    char str[50],cpy[50];
    int length1,length2,i;
    printf("\nPlease Enter A String : ");
    scanf("%[^\n]%*c",str);
    printf("Please Enter a Second String : ");
    scanf("%[^\n]",cpy);
    //printf("\nStr : %s",str );

    // string length

    for(i=0;str[i]!='\0';++i);
    length1=i;
    for(i=0;cpy[i]!='\0';++i);
    length2=i;


   /* for(i=0;i<length+1;++i)

        cpy[i]=str[i];*/
        str[length1]=' ';

    for(i=length1+1;j<length2+1;++i,++j)

        str[i]=cpy[j];


    printf("\n Copy compleated......");
    printf("\nCopied String : %s",str);

    return 0;
}

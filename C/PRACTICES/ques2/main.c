#include<stdio.h>
#include<string.h>
int main()
{

    char fst[50],lst[50];
    printf("Enter your first name : ");
    scanf("%s",fst);
    printf("Enter your last name : ");
    scanf("%s",lst);
    if(strcmp(fst,lst)==0)
    {
        printf("\a\nYour First Name and Last Name can't be same");
        return 1;
    }

    else
    {
        strcat(fst," ");
        strcat(fst,lst);
    }

    printf("\n%s",fst);
    return 0;
}

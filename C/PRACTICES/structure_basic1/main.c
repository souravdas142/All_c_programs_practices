//using nested structure
// making of account

#include<conio.h>
#include<stdio.h>
#include<string.h>
struct user_account
{
    char fstnme[40];
    char lstnme[30];
    char usrnme[50];
    char passwd[50];
    struct DOB{
    int day;
    int month;
    int year;
    }dob; // vriable name as array
    struct Gender{
    int male;
    int female;
    }gender; // vriable name as array
};
void input(struct user_account x[]);
void output(struct user_account y[]);
void passwd(char pasd[]);

int main()
{
    struct user_account user[1];

    input(user);
    output(user);


    return 0;
}


void input(struct user_account user[])
{
    printf("*********** INPUT FORM ***************\n\n");

    char chkpasswd[50];
    char chkgnd;
    printf("Enter your first name : ");
    scanf("%s",user[0].fstnme);
    printf("\nEnter your Last Name : ");
    scanf("%s",user[0].lstnme);
    printf("\nEnter your user name : ");
    scanf("%s",user[0].usrnme);

    // *********** PASSWORD **********

    printf("\nEnter your password : ");
    passwd(user[0].passwd);
    while(1){
    printf("\nRetype your password : ");
    passwd(chkpasswd);
    if(strcasecmp(user[0].passwd,chkpasswd)!=0){
        printf("\n\aWrong input");
    }
    else
        break;
    }


    printf("\nEnter your Date of Birth\n");
    printf("\tDay : ");
    scanf("%d",&user[0].dob.day);
    printf("\tMonth : ");
    scanf("%d",&user[0].dob.month);
    printf("\tYear : ");
    scanf("%d",&user[0].dob.year);

    while(1){
    fflush(stdin);
    printf("\nWhats your Gender <Press male for 'm' or 'f' for female : ");

    scanf("%c",&chkgnd);
    if(chkgnd=='m' || chkgnd=='M')
    {
        user[0].gender.male=1;
        user[0].gender.female=0;
        break;
    }
    else if(chkgnd=='f' || chkgnd=='F')
    {
        user[0].gender.male=0;
        user[0].gender.female=1;
        break;
    }
    else
        printf("\n\ayour have entered wrong key");


    }
}

void output(struct user_account user[])
{
    char permission;
    printf("************ OUTPUT *************\n\n");
    printf("Name : %s %s",user[0].fstnme,user[0].lstnme);
    printf("\nUser ID : %s",user[0].usrnme);
    printf("\nPassword : \a Sorry you are not allowed to view");
    while(1){
    fflush(stdin);
    printf("\tIF YOU ARE REALLY WANT TO VIEW PRESS Y ELSE N : ");
    scanf("%c",&permission);
    if(permission=='y' || permission=='Y')
    {
        printf("\nYour password is : %s",user[0].passwd);
        break;
    }

    else if(permission=='n' || permission=='N')
        break;
    else
        printf("\a Wrong key\n");
    }
    printf("\nDate of Birth : %d / %d /%d",user[0].dob.day,user[0].dob.month,user[0].dob.year);
    printf("\nGender : ");
    if(user[0].gender.male==1)
        printf("Male");
    else
        printf("Female");
}
void passwd(char pasd[])
{
   char a;
   int i=0;
   while(1)
   {
     a=getch();

     if(a==13)
        break;

        pasd[i]=a;
        putchar('*');
     i++;

   }
   pasd[i]='\0';
}


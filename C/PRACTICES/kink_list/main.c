#include<stdio.h>
#include<stdlib.h>
#include"funcsd.h"

int main()
{
    void (*prnt)(void);
    prnt=&prntt;
    int chk,scn,num,del,sel;
 while(1){

    printf("\n************************** MENU *************************\n");
    printf("\npress '1' for node create : \npress 2 for insert before : \npress 3 to insert after : \
\nprintf 4 delete after : \npress 5 to display : \npress 6 to clear the screen : \n('0') to exit : \n");
    scanf("%d",&sel);
    if(sel==0)
        return 0;
    printf("\n\n");
    switch(sel){
    case 1:
        while(1){
            chk=node_create();
            if(chk==EOF)
            break;
        }
        break;
    case 2:
        printf("\nInsert before a number : ");
        scanf("%d",&scn);
        insrt_before_num(scn);
        break;
    case 3:
        printf("\nEnter Number after you insert : ");
        scanf("%d",&num);
        insrt_after_num(num);
        break;
    case 4:
        printf("\nEnter a number to delete after it : ");
        scanf("%d",&del);
        del_after_num(del);
        break;
    case 5:
        prnt();
        break;
    case 6:
        system("CLS");
        break;
    default:
        printf("\a\nYou have entered wrong input");
    }
 }
    return 0;
}

#include<stdio.h>
#include<string.h>
void ext(char str[]);
int main()
{
    char str[50];
    printf("Enter a string : ");
    gets(str);
    {

    }

}
void ext(char str[])
{
    int is_strt=0,i;
    char alp;
    for(i=0;i<50;i++)
    {

      if(str[i] >= 'a' && str[i] <= 'z')
      {
          is_strt=1;
          alp='A'+str[i]-'a';
      }
    }
}


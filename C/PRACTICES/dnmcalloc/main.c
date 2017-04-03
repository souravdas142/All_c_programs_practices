//use of malloc caalloc realloc free function for dynamic array

#include<stdio.h>
#include<stdlib.h>
int main()
{

    int block,i,j,temp,*alloc;


    printf("how many blocks : ");
    scanf("%d",&block);
   alloc=(int *)calloc(block,sizeof(int));

    if(!NULL)
        printf("\nAllocate completed.....\n");
    else{
        printf("\nFailed to allocate :( \n");
        return 1;
    }


    for(i=0;i<block;i++){

      alloc[i]=block-i;
      printf("%4d",*(alloc+i));
    }
    for(i=0,j=block-1;j>i;i++,j--)
    {

      temp=alloc[i];
      alloc[i]=alloc[j];
      alloc[j]=temp;
    }
    printf("\n\n");
    for(i=0;i<block;i++)
        printf("%4d",*(alloc+i));


    printf("\nReallocating : \n");
    int *alloc2=(int *)realloc(alloc,(2*block)*sizeof(int));
     printf("\n\n");
    for(i=0;i<(2*block);i++)
    {
       // if(i>=block)
       //alloc2[i]=block*i;
        printf("%10d",*(alloc2+i));
    }
        printf("\n\n");
    for(i=0;i<(2*block);i++)
        printf("%4d",*(alloc+i));

   return 0;
}

#include<stdio.h>
void srting(int unsrt[],int a);
void srch(int a[],int key,int rng);
int main()
{
    int unsrted[100],rng,i,key;

    printf("Enter range : ");
    scanf("%d",&rng);
    printf("Insert Elements one by one : ");
    for(i=0;i<rng;++i)
        scanf("%d",&unsrted[i]);
    srting(unsrted,rng);
    printf("\n Enter your quary ? : ");
    scanf("%d",&key);
    srch(unsrted,key,rng);


  return 0;
}
void srting(int unsrt[],int rng)
{
    int les,i;
    //les=unsrt[0];
    for(i=0;i<rng;++i)
    {
        for(int j=0;j<rng;++j)
        {
            if(unsrt[i]<unsrt[j])
            {
                les=unsrt[i];
                unsrt[i]=unsrt[j];
                unsrt[j]=les;
            }
        }
    }

}

void srch(int arr[],int key,int rng)
{
     int start=0,end=rng,mid;
     printf("\n\n");
     for(;start<rng;start++)
        printf("%d\t",arr[start]);
     start=0;
     printf("\n\n");
    do{
        mid = (int)(start + end)/2;
        if(arr[mid]==key){
            printf("the number %d is present at %d position\n\n",key,mid+1);
            break;
        }
        else if(arr[mid] > key){
            end=mid-1;
        }
        else{
            start = mid+1;
        }
    }while(start<=end);
}

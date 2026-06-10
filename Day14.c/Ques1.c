#include<stdio.h>
int main()
{
    int i,a,d,search,flag=0;
    printf("enter the number of elements:");
    scanf("%d",&i);
    int arr[i];
    printf("enter elements of the array:");
    for( a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&search);
    for(a=0;a<i;a++){
        if(arr[a]==search){
            flag=1;
            d=a;
            break;
        }
    }
        if(flag==1)
        {
            printf("%d is found at the position %d",search,d+1);
        }
        else{
            printf("%d is not present in the given array",search);
        }
    return 0;
}
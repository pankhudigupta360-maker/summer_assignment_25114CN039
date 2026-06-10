#include<stdio.h>
int main()
{
    int i,a,temp;
    printf("enter the number of the elements:");
    scanf("%d",&i);
    int arr[i];
    printf("enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for(a=0;a<i;a++){
        if(arr[a]>arr[a+1]){
            temp=arr[a];
            arr[a]=arr[a+1];
            arr[a+1]=temp;
        }
    }
    printf("the sorted array:");
    for(a=0;a<i;a++){
        printf("\t%d",arr[a]);
    }
    printf("\nthe second largest element in the array is %d",arr[i-2]);
    return 0;
}
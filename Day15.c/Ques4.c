#include<stdio.h>
int main()
{
    int i,a,temp;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for(int b=0;b<i-1;b++){
    for(a=0;a<i-1-b;a++){
        if(arr[a]==0){
            temp=arr[a];
            arr[a]=arr[a+1];
            arr[a+1]=temp;
        }
    }
}
    printf("Array after modification:");
    for(a=0;a<i;a++){
        printf("\t%d",arr[a]);
    }
    return 0;
}
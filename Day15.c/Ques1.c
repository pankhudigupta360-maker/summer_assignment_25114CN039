#include<stdio.h>
int main()
{
    int i,a,b,temp;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elememts of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("ARRAY BEFORE REVERSING THE ELEMENTS:");
    for(a=0;a<i;a++){
        printf("\t%d",arr[a]);
    }
    for(a=0,b=i-1;a<i/2;a++,b--){
    temp=arr[b];
    arr[b]=arr[a];
    arr[a]=temp;
    }
    printf("\nARRAY AFTER REVERSING THE ELEMENTS:");
    for(a=0;a<i;a++){
        printf("\t%d",arr[a]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,a,b,left,temp;
    printf("Enter the number of elements of the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("Enter the number of elements by which the array has to be shifted left:");
    scanf("%d",&left);
    for(a=0;a<left;a++){
        temp=0;
        for(b=0;b<i-1;b++){
            temp=arr[b];
            arr[b]=arr[b+1];
            arr[b+1]=temp;
        }
    }
    printf("Array after shifting %d times left:",left);
    for(a=0;a<i;a++){
        printf("\t%d",arr[a]);
    }
    return 0;
}
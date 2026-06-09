#include<stdio.h>
int main()
{
    int i,sum=0,avg=0;
    printf("Enter the number of elements for the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(int a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<i;a++){
        sum+=arr[a];
    }
    avg=sum/i;
    printf("Array:\n");
    for(int a=0;a<i;a++){
        printf("%d\t",arr[a]);
    }
    printf("\nSum of all the elements in the array is%d\n",sum);
    printf("Average of the elements of the array is %d",avg);
    return 0;
}
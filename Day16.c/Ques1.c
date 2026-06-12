#include<stdio.h>
int main()
{
    int i,a,sum=0,totalsum=0,missing;
    printf("Enter the number of elements of the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i-1;a++){
        scanf("%d",&arr[a]);
        sum=sum+arr[a];
    }
    totalsum=i*(i+1)/2;
    missing=totalsum-sum;
    printf("the missing number is %d",missing);
    return 0;
}
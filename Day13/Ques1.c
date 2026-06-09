#include<stdio.h>
int main()
{
    int i;
    printf("Enter your number of elemnets in the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter your elements of the array:");
    for(int a=0;a<i;a++)
    {
    scanf("%d",&arr[a]);
    }
    printf("Array:\n");
    for(int a=0;a<i;a++)
    {
        printf("%d\t",arr[a]);
    }
    return 0;
}
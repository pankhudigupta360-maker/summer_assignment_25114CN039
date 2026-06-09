#include<stdio.h>
int main()
{
    int i,max,min;
    printf("Enter the number of elements of the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(int a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    max=min=arr[0];
    for(int a=0;a<i;a++){
        if(arr[a]>max){
            max=arr[a];
        }
        if(arr[a]<min){
            min=arr[a];
        }
    }
    printf("Array:\n");
for(int a=0;a<i;a++){
    printf("%d\t",arr[a]);
}
printf("\nThe smallest and lagrest element in the array is %d and %d",min,max);
return 0;
}
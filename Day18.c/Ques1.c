//bubble sort(ascending order)
#include<stdio.h>
int main()
{
int i,a,swap;
printf("enter the number of elements in the array:");
scanf("%d",&i);
int arr[i];
printf("Enter the elements in the array:");
for(a=0;a<i;a++){
    scanf("%d",&arr[a]);
}
for(a=0;a<i-1;a++){
    for(int b=0;b<i-1-a;b++){
        if(arr[b]>arr[b+1]){
            swap=arr[b];
            arr[b]=arr[b+1];
            arr[b+1]=swap;
        }
    }
}
printf("the sorted array:\n");
for(a=0;a<i;a++){
    printf("%d\t",arr[a]);
}
return 0;
}

#include<stdio.h>
int main()
{
int i,a,right,temp;    
printf("Enter the number of elements:");
scanf("%d",&i);
int arr[i];
printf("Enter the elements of the array:");
for(a=0;a<i;a++){
    scanf("%d",&arr[a]);
}
printf("Enter the number of times the array has to be shifted right:");
scanf("%d",&right);
for(int b=0;b<right;b++){
    for(a=0;a<i-1;a++){
        temp=arr[a+1];
        arr[a+1]=arr[a];
        arr[a]=temp;
     }
}
printf("Array after shifting right by %d times:",right);
for(a=0;a<i;a++){
    printf("\t%d",arr[a]);
}
return 0;
}
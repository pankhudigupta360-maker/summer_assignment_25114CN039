//this program gives output for series 1 to n(like ap with constant differnce 1).
#include<stdio.h>
int main()
{
int i,a,totalsum,missing,sum=0;
printf("Enter the number element in the array:");
scanf("%d",&i);
int arr[i];
printf("Enter the elements of the array:");
for(a=0;a<i-1;a++){
    scanf("%d",&arr[a]);
}
for(a=0;a<i-1;a++){
    sum+=arr[a];
}
totalsum=i*(i+1)/2;
missing=totalsum-sum;
printf("the missing element:%d",missing);
return 0;
}
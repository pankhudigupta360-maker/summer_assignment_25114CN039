#include<stdio.h>
int main()
{
int i,n,sum,a,b,found=0;
int arr[100];
printf("enter number of elements:");
scanf("%d",&n);
printf("enter array element:");
for(i=0;i<n;n++){
scanf("%d",&arr[i]);
}
printf("enter the sum to find:");
scanf("%d",&sum);
printf("pairs with sum %d are:",sum);
for(a=0;a<n;a++){
    for(b=a+1;b<n;b++){
        if(arr[a]+arr[b]==sum){
            printf("(%d,%d)",arr[a],arr[b]);
            found=1;
        }
    }
}
if(found==0){
    printf("no pair found");
}
return 0;
}
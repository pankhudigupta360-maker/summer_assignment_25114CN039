//program for finding pair of elements in an array equal to a given sum.
#include<stdio.h>
int main()
{
    int i,a,sum;
    printf("Enter the number of elements of the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
    for(a=0;a<i;a++){
        int sum=0;
        for(int k=0;k<a;k++){
            if(arr[a]+arr[k]==sum){
             printf("%d and %d is the pair equal to the %d\n",arr[a],arr[k],sum);
             sum=1;
            }
        }
            if(sum==0){
                printf("no pair equal to %d found.",sum);
            }
    }
    return 0;
}
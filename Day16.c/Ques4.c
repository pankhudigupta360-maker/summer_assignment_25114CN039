//program for removing duplicates in an array.
#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    int arr[i];
    printf("enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("Array after removing the duplicates: ");
    for(a=0;a<i;a++){
        int alr=0;
        for(int k=0;k<a;k++){
        if(arr[a]==arr[k]){
            alr=1;
            break;
        }
        }
        if(alr==0){
            printf("\t%d",arr[a]);
        }
    }
    return 0;
}

//program for merging two arrays
#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number of elements for both array:");
    scanf("%d %d",&i,&j);
    int arr1[i],arr2[j];
    printf("Enter the elements of the array:");
    for(int a=0;a<i;a++){
        scanf("%d",&arr1[a]);
    }
    printf("Enter the elements of the array:");
    for(int b=0;b<j;b++){
        scanf("%d",&arr2[b]);
    }
    printf("Array after merging:\n");
        for(int a=0;a<i;a++){
            printf("%d\t",arr1[a]);
        }
        for(int b=0;b<j;b++){
            printf("%d\t",arr2[b]);
        }
        return 0;
}
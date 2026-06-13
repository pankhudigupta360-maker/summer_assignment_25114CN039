//program for finding union of two arrays
#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the number of elements of the array:");
    scanf("%d %d",&i,&j);
    int arr1[i],arr2[j];
    printf("Enter the elements of the first array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr1[a]);
    }
    printf("Enter the element of the second array:");
    for(b=0;b<j;b++){
        scanf("%d",&arr2[b]);
    }
    printf("Array after union:");
    for(a=0;a<i;a++){
        printf("%d\t",arr1[a]);
    }
    for(b=0;b<j;b++){
        int alr=0;
        for(a=0;a<i;a++){
            if(arr2[b]==arr1[a]){
        alr=1;
        break;
        }
    }
        if(alr==0){
            printf("%d\t",arr2[b]);
        }
}
return 0;
}
//program for finding intersection of two the arrays
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
    printf("Intersection of both the arrays:");
    for(a=0;a<i;a++){
        int alr=0;
    for(b=0;b<j;b++){
            if(arr2[b]==arr1[a]){
        alr=1;
        break;
        }
    }
        if(alr==1){
            printf("%d\t",arr1[a]);
        }
    }
return 0;
}

//selection sort(descending order)
#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter number of elements of the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for(a=0;a<i-1;a++){
        for(b=a+1;b<i;b++){
            if(arr[a]<arr[b]){
                j=arr[a];
                arr[a]=arr[b];
                arr[b]=j;
            }
        }
    }
printf("Sorted array:\n");
for(a=0;a<i;a++){
    printf("%d\t",arr[a]);
}
return 0;
}
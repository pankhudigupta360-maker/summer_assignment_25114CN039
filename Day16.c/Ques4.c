#include<stdio.h>
int main()
{
    int i,n,j,k=0;
    int arr[100],temp[100];
    printf("enter number of elements");
    scanf("%d",&n);
    printf("eenter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int isDup=0;
        for(j=0;j<k;j++){
            if(arr[i]==temp[j]){
                isDup=1;
                break;
            }
        }
        if(isDup==0){
            temp[k]=arr[i];
            k++;
        }
    }
    printf("array after removing duplicates:");
    for(i=0;i<k;i++){
        printf("%d",temp[i]);
    }
    return 0;
}

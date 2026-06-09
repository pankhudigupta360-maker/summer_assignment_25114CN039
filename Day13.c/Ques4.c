#include<stdio.h>
int main()
{
    int i,even,odd;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    even=odd=0;
    int arr[i];
    printf("Enter the elements:");
    for(int a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<i;a++){
        if(arr[a]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Array:");
    for(int a=0;a<i;a++){
        printf("\t%d",arr[a]);
    }
    printf("\nTotal number of odd and even elements in the array are %d and %d",odd,even);
    return 0;
}
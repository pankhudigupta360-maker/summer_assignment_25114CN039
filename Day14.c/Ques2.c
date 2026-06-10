#include<stdio.h>
int main()
{
    int i,element,count=0;
    printf("enter the number of element:");
    scanf("%d",&i);
    int arr[i];
    printf("enter the elements of the array:");
    for(int a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("enter the element whose frequency has to be checked:");
    scanf("%d",&element);
    for(int a=0;a<i;a++){
    if(element==arr[a]){
        count++;
    }
    }
    printf("the frequency of %d in the array is %d",element,count);
    return 0;
}
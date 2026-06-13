//program for finding the element with highest frequency in an array.
#include<stdio.h>
int main()
{
    int i,a,x,b,element,max=0,count;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("the most frequent element:");
    for(a=0;a<i;a++){
    element=arr[a];
    count=0;
    for(b=0;b<i;b++){
        if(element==arr[b]){
            count++;
        }
    }
    int alrp=0;
    for(int k=0;k<a;k++){
        if(element==arr[k]){
        alrp=1;
        break;
    }
}
    if(count>=max&&alrp==0){
    max=count;
    x=element;
    printf("%d recurring %d times",x,max);
    }
  }
return 0;
}
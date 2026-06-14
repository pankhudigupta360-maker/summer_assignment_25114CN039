//binary search
#include<stdio.h>
int main()
{
    int i,a,first,last,middle,search;
    printf("Enter the number of elements of the array:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&search);
    first=0;
    last=i-1;
    middle=(first+last)/2;
    while(first<=last){
    if(search>arr[middle])
    {
        first=middle+1;
        middle=(first+last)/2;
    }
    else if(arr[middle]==search)
    {
        printf("%d is found at position %d",search,middle+1);
        break;
    }
    else{
        last=middle-1;
        middle=(first+last)/2;
    }
    }
    if(last<first){
        printf("search not found.");
    }
    return 0;
}

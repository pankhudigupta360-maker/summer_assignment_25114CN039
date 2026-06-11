#include<stdio.h>
int main()
{
    int i,x,a,count,alrprint;
    printf("enter the number of elements:");
    scanf("%d",&i);
    int arr[i];
    printf("enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    printf("the duplicates in the array are:");
    for(a=0;a<i;a++){
        x=arr[a];
        count=0;
        for(int b=0;b<i;b++){
            if(x==arr[b]){
                count++;
            }
        }
        if(count>1){
            alrprint=0;
            for(int b=0;b<a;b++){
                if(arr[a]==arr[b]){
                    alrprint=1;
                    break;
                }
            }
        if(alrprint==0){
            printf("%d",x);
        }
    }
}
return 0;
}
#include<stdio.h>
int main()
{
    int i,a,b,element,alrprinted,maxf,count,k;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements of the array:");
    for(a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for( b=0;b<i;b++){
    alrprinted=0;
    maxf=0;
    element=0;    
    for( k=0;k<i;k++){
    if(arr[b]==arr[k]){
    alrprinted=1;
    break;
    }
}
    if(alrprinted==1)continue;
    count =0;
    for(a=0;a<i;a++){
        if(arr[a]==arr[b]){
            count++;
        }
    } 
        if(count>=maxf){
            maxf=count;
            element=arr[b];
        }
    }
 printf("%d is the most frequent element of frequency %d\n",element,maxf);
 return 0;
}


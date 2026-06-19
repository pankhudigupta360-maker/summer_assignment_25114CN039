//program to find element with highest frequency.
#include<stdio.h>
#include<string.h>
int main()
{
    int count,maxf=0,k=0;
    char str1[1000],element[100],c;
    printf("Enter string value:");
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Elements with highest frequency:\n");
    for(int i=0;str1[i]!='\0';i++){
        count=0;
        c=str1[i];
        for(int j=0;str1[j]!='\0';j++){
            if(c==str1[j]){
                count++;
            }
        }
        int alrp=0;
        for(int a=0;a<i;a++){
            if(c==str1[a]){
                alrp=1;
                break;
            }
        }
        if(alrp)continue;
        if(count>maxf){
            maxf=count;
            k=0;
            element[k++]=c;
        }
        else if(count==maxf){
            element[k++]=c;
        }
    }
    element[k]='\0';
    printf("%s with %d frequency",element,maxf);
    return 0;
} 
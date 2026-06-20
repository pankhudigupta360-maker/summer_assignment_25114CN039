#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter string value:");
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
        int j;
        for(j=0;j<i;j++){
            if(c==str[j]){
                break;
            }
        }
        if(j==i){
            printf("%c",c);
        }
    }
    return 0;
}
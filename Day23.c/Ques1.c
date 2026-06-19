//program to write string with no repeating characters.
#include<stdio.h>
#include<string.h>
int main()
{
    int count;
    char str[1000];
    printf("Enter string value:");
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("string with no repeating characters:\n");
    for(int i=0;str[i]!='\0';i++){
        count=0;
        char c=str[i];
        for(int j=0;str[j]!=0;j++){
            if(str[j]==c){
                count++;
            }
        }  
        if(count<=1){
            printf("%c",c);
        }
    }
    return 0;
}
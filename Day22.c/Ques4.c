//program to remove spaces in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter string value:");
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("String after removing spaces:\n");
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int max=0,j=0,i=0;
    char str[1000],c,word[1000],longest[1000];
    printf("Enter string value:");
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i]!='\0';i++){
        c=str[i];
        if(c!=' '){
         word[j++]=c;
        }else{
        word[j]='\0';
    int a=strlen(word);
    if(a>max){
        max=a;
        strcpy(longest,word);
    }
    j=0;
    }
    }
    printf("%s is the longest word",longest);
    return 0;
}
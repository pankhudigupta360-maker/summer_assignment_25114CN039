//program to convert lowercase to uppercase alphabets in a string.
#include<stdio.h>
int main()
{
    int i=0;
    char str[100];
    printf("Enter string value:");
    scanf("%99s",str);
    printf("After converting in upper case:");
    while(str[i]!='\0')
    {
        char c=str[i];
        if(c>='a'&&c<='z'){
            printf("%c",(char)(c-32));
        }
        else if(c>='A'&&c<='Z'){
            printf("%c",c);
        }
        i++;
    }
    return 0;
}
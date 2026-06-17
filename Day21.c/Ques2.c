//program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    printf("Enter string value:");
    scanf("%99s",str);
    strcpy(str1,str);
    strrev(str1);
    printf("REVERSE STRING VALUE IS %s",str1);
}
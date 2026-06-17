//program to count the lenght of a string wihtout using strlen() function
#include<stdio.h> 
int main()
{
    char str[100];
    int count=0;
    printf("Enter your string value:");
    scanf("%99s", str);
    while(str[count]!='\0'){
        count++;
    }
    printf("Total string lenght is %d",count);
    return 0;

}
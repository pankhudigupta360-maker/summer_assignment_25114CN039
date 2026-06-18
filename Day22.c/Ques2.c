///program to count words in a sentance.
#include<stdio.h>
#include<string.h>
int main()
{
   int i,count=0;
   char str[1000];
   printf("Enter your string value:");
   //for every string program ,remember it.
   fgets(str,1000,stdin);
   //strcspn gives index for the first time when the character appears in the string.
   //then str[index]='\0' which helps indicate the end of a string.
   str[strcspn(str,"\n")]='\0';
   for(i=0;str[i]!='\0';i++){
    //words count-last term should be a space and current term should not a space.
    if(((i==0)&&str[i]!=' ')||(str[i-1]==' '&&str[i]!=' '))
    {
        count++;
    }
   }
   printf("Number of words in %s is %d",str,count);
   return 0;
}
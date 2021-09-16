#include<stdio.h>
#include<string.h>
int main ()
{
   char text[10000];
   int howLong;
   int i;
   
   printf("Input : ");
   scanf("%s",text);
   howLong = strlen(text);
   
   printf("Output : ");
   for(i=0;howLong>=i;howLong--)
   {
       printf("%c",text[howLong]);
   }

    return 0;
}
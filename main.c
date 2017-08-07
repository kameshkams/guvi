#include <stdio.h>

int main()
{
   int n;
   printf("Enter the value:");
   scanf("%d",&n);
   if(n>0)
   {
       printf("Positive integer");
      
   }else if(n<0)
   {
       printf("Negative integer");
   }
   else
   {printf("Number is zero");}
    return 0;
}

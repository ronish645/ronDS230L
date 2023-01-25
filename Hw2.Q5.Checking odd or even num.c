#include <stdio.h>

int main()
{
   int a;
   printf("Enter a:\n"); //Prompt the user to enter value of a. Example: a = 8
   scanf("%d",&a);
   
   //Using short hand if_else statement.     
   (a%2==0)? printf("%d is an even number",a): printf("%d is odd number", a);   
 
  //8 is divisible by 2 so 8 is an even number.

   return 0;
}
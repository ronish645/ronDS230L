#include <stdio.h>

int main()
{
   int a,b;   //Declare variables a and b.
   printf("Enter the two values a and b\n ");  //Prompt the user to input two values of a and b.
   scanf("%d%d", &a , &b);
   printf("a = %d, b = %d\n", a, b);  // here a =10, b=20
   
   a = a+b;    // a =30
   b = a-b;   // (b = 30 -20 = 10), b =10
   a = a-b;   // (a = 30 -10 = 20), a =20
   
   printf("After swap a = %d and b = %d",a ,b);   // a = 20 and b = 10
   return 0; //End the program
}

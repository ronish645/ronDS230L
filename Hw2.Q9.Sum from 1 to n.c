#include <stdio.h>

int main()
{
   int num, count=1, sum=0;  //declare the variables num, count and sum.
   printf("Enter a number: "); //prompt the user to enter the value.
   scanf("%d",&num);
   // Use while loop to perform the operation.
   while (count <= num) {
       sum += count;
       count++;
   }
   printf("sum is %d", sum);
   return 0;
}
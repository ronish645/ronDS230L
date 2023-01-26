#include <stdio.h>

int main()
{
   int a, b, opr;
   int ans;
   printf("Enter two numbers  a and b:\n");
   scanf("%d%d", &a, &b);
   printf("Enter 1 for sum, 2 for multiply, 3 for subtraction, 4 for division: ");
   scanf("%d", &opr);
   
   switch(opr){
       case 1: ans = a + b;
               printf("sum = %d\n",ans);
               break;
       case 2: ans = a * b;
               printf("result=%d\n",ans);
               break;
       case 3: ans = a - b;
               printf("result=%d\n",ans);
               break;
       case 4: ans = a/b;
               printf("result=%d\n",ans);
               break;
       default: printf("Invalid input!\n");
       
   }
    return 0;
}
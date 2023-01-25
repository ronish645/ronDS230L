#include <stdio.h>

int main()
{
   int num, reverse = 0, rev;  //Decalre the variables.
   
   printf("Enter a number: ");   //Prompt the user to enter a number.
   scanf("%d",&num);             // num = 456
   
   while (num > 0){          /*456 > 0 so,  456 % 10 = 6,  rev = 6*/
       rev = num % 10;       /* 0*10+6 = 6, reverse = 6 then 456/10 = 45 then again 45 > 0 so 45%10 = 5 , rev = 5, 0*10 + 5 = 5, reverse = 5*/
       reverse = reverse * 10 + rev;  
       num = num/10;
   }
   printf("The reversed number is: %d\n",reverse);
   return 0; //End the program
}

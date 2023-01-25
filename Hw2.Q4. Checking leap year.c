#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year:\n");   //enter the year.
    scanf("%d", &year);
    
    if( (year % 100 == 0 && year % 400 == 0) ||    //if year is divisible by 100 then its century year.
      (year % 4 == 0 && year % 100 != 0)){     //and if century year is divisible by 400 then its a leap year
          printf("%d is a leap year", year); // OR, if year is divisible by 4 and not divisible by 100 then its a leap year.
      } else{
          printf("%d is not a leap year", year);
      }
      return 0;
}      
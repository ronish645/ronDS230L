#include <stdio.h>

int main()
{
    int a, b, c;   // Declare three varibles a , b and c.
    printf("Enter the values of a , b and c respectively:\n"); //prompt the user to enter values. a=5, b=7 and c=4
    scanf("%d%d%d",&a,&b,&c);
    
    int greatest = a;   //initiate the greatest variable with 1st number.
    if(b > greatest) {  // compare second number with current greatest number.
        printf("b is greatest.");  //update the greatest number
    }
    if(c > greatest) {   // compare the third number with current greatest number
        printf("c is greatest.");  // update the new greatest number.
    }
    return 0;   //End the program
}

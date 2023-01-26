#include <stdio.h>

int main()
{
    char days;    //Declare a variable using char to store character.
    printf("Enter a character (m,t,w,h,f,s,u): ");  // Enter character. Example f
    scanf(" %c", &days);
  // Use the switch statement instead of many if-else statement.
    switch (days) {
        case 'm':
            printf("Monday\n");
            break;
        case 't':
            printf("Tuesday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'h':
            printf("Thursday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 's':
            printf("Saturday\n");
            break;
        case 'u':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;  //End the program
}



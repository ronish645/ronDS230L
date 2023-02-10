                   //Q.No.1
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;             // Variable to store the number entered by the user
    int count = 0;     // Variable to store the count of factors of the number
    
    printf("Enter the number: ");  // Prompts the user to enter a number
    scanf("%d", &n);  
    if (n<=1){                 //Numbers less than 1 are neither prime nor composite.
        return false;
    }
    for(int i=1; i<=n; i++){   //  loop the iteration from 1 to n
        if(n%i==0){  // Check if n is divisible by any of the numbers (i)
            count++;  // Increment the count if n is divisible
        }
    }
    
    if(count==2){    //count==2 means n is only divisible by 1 and itself.
       //Any number divisible by 1 and itself is a prime number.
        printf("Prime number? YES");  
    }else{
      //Any Number having more than 2 divisibles is not a prime number.
        printf("Prime number? NO");     
    }
    return 0;
}




                  //Q.No.2
#include <stdio.h> 

int main(){
    int a,b; // Declare two integer variables, a and b
    int r; // Declare an integer variable r to store the result of the bitwise And operation
    
    printf("Enter the 1st value: "); // Prompt the user to enter the first value
    scanf("%d",&a); // Read the first value entered by the user and store it in the variable 'a'
    
    printf("Enter the 2nd value: "); // Prompt the user to enter the second value
    scanf("%d",&b); // Read the second value entered by the user and store it in the variable 'b'
    
    r = a & b; // Perform the bitwise And operation on the values stored in 'a' and 'b' and store the result in 'r'
    
    printf("The Answer after Anding is:%d",r); // Print the result 
    
    return 0;
}







                       //Q.No.3
#include <stdio.h>

int main(){
    int n,a=0,b=1, c; // Declare an integer variable 'n' to store the number of terms and three integer variables 'a', 'b', and 'c' to store the terms in the series
    
    printf("Enter the number of terms: "); // Prompt the user to enter the number of terms in the Fibonacci series
    scanf("%d",&n); // Read the number of terms entered by the user and store it in the variable 'n'
  
    printf("Fibonacci series: ");
    
    // Use a for loop to generate and display the terms of the Fibonacci series.
    
    for(int i=1;i<=n;i++){
        printf("%d,",a);   // Print the current term of the series, which is stored in the variable 'a'
        c=a+b;   // Calculate the next term of the series by adding the current terms stored in 'a' and 'b'
        a=b; // Shift the value of 'b' to 'a' so that it becomes the current term
        b=c; // Shift the value of the next term stored in 'c' to 'b' so that it becomes the next term
    }
    
    return 0; // End the program.
}



                        //Q.No.4
#include <stdio.h>

int main() {
    int n; // Declare an integer variable 'n' to store the value of n entered by the user
    float sum = 0; // Declare a floating-point variable 'sum' to store the sum of the series

    printf("Enter the value of n: "); // Prompt the user to enter the value of n
    scanf("%d", &n); // Read the value of n entered by the user and store it in the variable 'n'

    // Use a while loop to calculate the sum of the series
    int i = 1;
    while (i <= n) {
        sum += 1.0 / i; // Add the next term 1/i to the running sum
        i++;
    }

    // Print the sum of the series
    printf("Sum of the series 1 + 1/2 + 1/3 + ... + 1/%d: %.3f", n, sum);

    return 0; // End the program
}






                      //Q.No.5
#include <stdio.h>

int main() {
    int arr[5];         // Declare an array to store 5 input values
    int max = 0;        // Declare a variable to store the maximum value 

    // Prompt the user to input the elements for the array
    printf("Enter elements for array: \n");
    for (int i = 0; i < 5; i++) {        // Loop to input the values of the array.
        scanf("%d", &arr[i]);
        // Check if the current element is greater than the maximum value.
        if (arr[i] > max) {
            // If so, update the maximum value
            max = arr[i];
        }
    }
    printf("maximum number = %d\n", max);   //Print the final result.

    return 0;   //End the program
}




                         //Q.No.6
#include <stdio.h>

// Function to read values for a matrix
void read_matrix(int matrix[3][2]) {
    // Prompt the user to enter values for the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]); // Read the value and store it in the matrix
        }
    }
}

// Function to display the values of a matrix
void print_matrix(int matrix[3][2]) {
    // Display the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]); // Print each element of the matrix
        }
        printf("\n"); // Print a newline after each row of the matrix
    }
}

int main() {
    int a[3][2]; // Declare an array 'a' to store the first matrix
    int b[3][2]; // Declare an array 'b' to store the second matrix
    int c[3][2]; // Declare an array 'c' to store the sum of the matrices

    // Read the values for the first matrix
    printf("Enter values for the first matrix (3x2):\n");
    read_matrix(a);

    // Read the values for the second matrix
    printf("Enter values for the second matrix (3x2):\n");
    read_matrix(b);

    // Calculate the sum of the matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j]; // Add the corresponding elements and store the result in the third matrix
        }
    }

    // Display the sum of the matrices
    printf("The sum of the matrices is:\n");
    print_matrix(c);

    return 0; //End the program
}










                         //Q.No.7
#include <stdio.h>

int main() {
    int n;         // Declare a variable to store the length of the array.
    int sum = 0;   //Declare a variable to store the sum of the elements.

    // Prompt the user to input the length of the array
    printf("Enter length of array: ");
    scanf("%d", &n);

    int arr[n];   // Declare an array to store the elements

    // Prompt the user to input each element in the array
    printf("Enter each element in array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Calculate the sum of the elements
        sum += arr[i];
    }
    int average = sum / n;      // Calculate the average of the elements


    printf("Average value in array: %d\n", average);
    return 0;   //End the program.
}



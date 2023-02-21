//Q.No.1
#include <stdio.h>

#define MAX_DISHES 100

int main() {
    int num_dishes;
    int original_count[MAX_DISHES];
    int new_count[MAX_DISHES];
    int labels[MAX_DISHES];
    int i, j, k, l;

    // Read in the number of dishes
    printf("Enter total number of Petri dishes: ");
    scanf("%d", &num_dishes);

    // Read in data for each dish
    printf("Enter Petri dish label, original bacterial number, new bacterial number after one hour reproduction:\n");
    for (i = 0; i < num_dishes; i++) {
        scanf("%d %d %d", &labels[i], &original_count[i], &new_count[i]);
    }

    // Determine the sub-species for each dish
    int subspecies[MAX_DISHES];
    double pr, max_pr_A = 0.0, max_pr_B = 0.0;
    for (i = 0; i < num_dishes; i++) {
        pr = (double)new_count[i] / (double)original_count[i];
        if (pr - max_pr_A > max_pr_B) {
            subspecies[i] = 1;
            max_pr_A = pr;
        } else {
            subspecies[i] = 2;
            max_pr_B = pr;
        }
    }

    // Print the results
    printf("Running results:\n");
    printf("%d in A sub-species and Petri dish labels from smaller PR to bigger PR are ", subspecies[0]);
    for (i = 0; i < num_dishes; i++) {
        if (subspecies[i] == 1) {
            printf("%d ", labels[i]);
        }
    }
    printf("\n");

    printf("%d in B sub-species and Petri dish labels from smaller PR to bigger PR are ", subspecies[0] == 1 ? 2 : 1);
    for (i = 0; i < num_dishes; i++) {
        if (subspecies[i] == 2) {
            printf("%d ", labels[i]);
        }
    }
    printf("\n");

    return 0;
}







//Q.No.2
#include <stdio.h>
#include <stdlib.h> //to use abs()function.
#include <limits.h> // defines a properties of a standard integer(To use INT_MAX AND INT_MIN)

int main() {
    int nums[6], max_odd = INT_MIN, min_even = INT_MAX;
    // Declare an array to store 6 integers
    // Set the initial values of max_odd and min_even to be the minimum and maximum possible integer values, respectively

    printf("Enter the integers: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &nums[i]);
        // Prompt the user to enter an integer and store it in the array
    }

    for (int i = 0; i < 6; i++) {
        if (nums[i] % 2 == 0 && nums[i] < min_even) {
            // If the number is even and less than the current minimum even number,
            // update the value of min_even to be the new number
            min_even = nums[i];
        } else if (nums[i] % 2 == 1 && nums[i] > max_odd) {
            // If the number is odd and greater than the current maximum odd number,
            // update the value of max_odd to be the new number
            max_odd = nums[i];
        }
    }

    int result = abs(max_odd - min_even);
    // Calculate the absolute difference between max_odd and min_even

    printf("Result is: %d\n", result);
    // Print the result to the console

    return 0;
}



//Q.No.3
#include <stdio.h>

int main() {
    int n, m, curr_king, i;
    printf("Enter total number of monkeys in a group: ");
    scanf("%d", &n);
    printf("Enter m value: ");
    scanf("%d", &m);
    curr_king = 0;  // initialize the current king to the first monkey
    for (i = 2; i <= n; i++) {
        curr_king = (curr_king + m) % i;
    }
    printf("The king will be %d\n", curr_king);
    return 0;
}


//Q.No.4
#include <stdio.h>

int main() {
    int amount, i;
    int bills[] = {100, 50, 20, 10, 5, 2, 1};
    int num_bills = sizeof(bills) / sizeof(int);
    int bill_counts[num_bills];

    // Prompt the user to enter the total payment
    printf("Enter total payment: ");
    scanf("%d", &amount);

    // Calculate the number of bills for each denomination
    for (i = 0; i < num_bills; i++) {
        bill_counts[i] = amount / bills[i];
        amount %= bills[i]; // update the amount for the next denomination
    }

    // Output the minimum number of bills and the count of each denomination
    printf("Result of minimum number of bills: %d\n", 
           bill_counts[0] + bill_counts[1] + bill_counts[2] + 
           bill_counts[3] + bill_counts[4] + bill_counts[5] + bill_counts[6]);
    printf("$100 bills: %d\n$50 bills: %d\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$2 bills: %d\n$1 bills: %d\n", 
           bill_counts[0], bill_counts[1], bill_counts[2], 
           bill_counts[3], bill_counts[4], bill_counts[5], bill_counts[6]);

    return 0;
}


//Q.No.5
#include <stdio.h>

int main(void) {
    int votes[4] = {0}; // initialize all elements to 0
    int correct_expert = -1;
    int max_votes = 0;
    int best_car = 0;

    // expert reviews
    int a = 2;
    int b = 4;
    int c = 3;
    int d = 2;

    // update vote counts
    votes[a-1]++;
    votes[b-1]++;
    votes[c-1]--;
    votes[d-1]--;

    // find car with most votes
    for (int i = 0; i < 4; i++) {
        if (votes[i] > max_votes) {
            max_votes = votes[i];
            best_car = i + 1;
        }
    }

    // find correct expert review
    char experts[] = {'A', 'B', 'C', 'D'};
    for (int i = 0; i < 4; i++) {
        if (i == best_car - 1) {
            continue;
        }
        if ((a == i + 1 && b != i + 1 && c != i + 1 && d != i + 1) ||
            (a != i + 1 && b == i + 1 && c != i + 1 && d != i + 1) ||
            (a != i + 1 && b != i + 1 && c == i + 1 && d != i + 1) ||
            (a != i + 1 && b != i + 1 && c != i + 1 && d == i + 1)) {
            correct_expert = experts[i];
            break;
        }
    }

    // print results
    printf("The best car is %d\n", best_car);
    printf("The correct expert review is %c\n", correct_expert);

    return 0;
}


//Q.No.6
#include <stdio.h>

int main() {
    int row, col;
    printf("Enter size of row & column: ");
    scanf("%d %d", &row, &col);

    int image[row][col];

    // Read in the image
    printf("Enter each element:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    // Count the number of malignant cells
    int count = 0;
    for (int i = 1; i < row - 1; i++) {
        for (int j = 1; j < col - 1; j++) {
            if (image[i][j] < 50 && image[i][j-1] > 50 && image[i][j+1] > 50 && image[i-1][j] > 50 && image[i+1][j] > 50) {
                count++;
            }
        }
    }

    // Print the result
    printf("Result of malignant cell detection: %d", count);

    return 0;
}

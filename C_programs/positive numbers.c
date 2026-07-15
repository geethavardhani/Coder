#include <stdio.h>

int main() {
    int number;

    // Create an infinite loop to read inputs continuously
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        // Check if the number is negative
        if (number < 0) {
            printf("Negative number detected. Exiting loop.\n");
            break; // Exit the loop immediately
        }

        printf("You entered: %d\n", number);
    }

    return 0;
}
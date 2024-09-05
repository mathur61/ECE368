#include <stdio.h>

// Function to print the minimum number of coins (greedy approach)
void print_minimum_combination(int cents) {
    int quarters = cents / 25;
    cents %= 25;  // Remaining cents after quarters
    
    int dimes = cents / 10;
    cents %= 10;  // Remaining cents after dimes
    
    int nickels = cents / 5;
    int pennies = cents % 5;  // Remaining cents after nickels
    
    // Print the minimum number of coins
    printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", 
           quarters, dimes, nickels, pennies);
}

// Function to print all combinations of coins
void print_combinations(int cents) {
    for (int quarters = cents / 25; quarters >= 0; quarters--) {
        int rem_after_quarters = cents - quarters * 25;
        
        for (int dimes = rem_after_quarters / 10; dimes >= 0; dimes--) {
            int rem_after_dimes = rem_after_quarters - dimes * 10;
            
            for (int nickels = rem_after_dimes / 5; nickels >= 0; nickels--) {
                int pennies = rem_after_dimes - nickels * 5;
                
                // Print each combination of coins
                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", 
                       quarters, dimes, nickels, pennies);
            }
        }
    }
}

int main() {
    int cents;
    
    // Read input (number of cents)
    printf("Enter the amount in cents: ");
    scanf("%d", &cents);

    // Step 1: Print the minimum number of coins first
    printf("Minimum number of coins:\n");
    print_minimum_combination(cents);
    
    // Step 2: Print all combinations
    printf("\nAll combinations of coins:\n");
    print_combinations(cents);
    
    return 0;
}

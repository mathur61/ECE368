#include <stdio.h>

//calculating the different denominations the change would be divided in
void print_combinations(int cents) {
    for (int quarters = cents / 25; quarters >= 0; quarters--) {
        int rem_after_quarters = cents - quarters * 25;
        
        for (int dimes = rem_after_quarters / 10; dimes >= 0; dimes--) {
            int rem_after_dimes = rem_after_quarters - dimes * 10;
            
            for (int nickels = rem_after_dimes / 5; nickels >= 0; nickels--) {
                int pennies = rem_after_dimes - nickels * 5;
                
                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quarters, dimes, nickels, pennies);

            }
        }
    }
}

int main() {
    int cents;
    
    // Read input (number of cents)
    scanf("%d", &cents);

    // Call the function to print all combinations
    print_combinations(cents);
    
    return 0;
}


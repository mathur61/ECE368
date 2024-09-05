#include <stdio.h>

void print_combinations(int cents) {
    for (int quarters = cents / 25; quarters >= 0; quarters--) {
        int remaining_after_quarters = cents - quarters * 25;
        for (int dimes = remaining_after_quarters / 10; dimes >= 0; dimes--) {
            int remaining_after_dimes = remaining_after_quarters - dimes * 10;
            for (int nickels = remaining_after_dimes / 5; nickels >= 0; nickels--) {
                int pennies = remaining_after_dimes - nickels * 5;
                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quarters, dimes, nickels, pennies);
            }
        }
    }
}

int main() {
    int cents;

    scanf("%d", &cents);

    print_combinations(cents);

    return 0;
}

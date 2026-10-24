#include <stdio.h>

int main() {
    int labtopprice, currentsavings, monthlysaving, months = 0;

    printf("Laptop price: ");
    scanf("%d", &labtopprice);

    printf("Current savings: ");
    scanf("%d", &currentsavings);

    printf("Monthly saving: ");
    scanf("%d", &monthlysaving);

    if (currentsavings < labtopprice) {
        do {	
            currentsavings = currentsavings + monthlysaving;
            months++;

            printf("Month %d: current savings = %d\n", months, currentsavings);

        } while (currentsavings < labtopprice);
    }

    printf("Sara can buy the laptop after %d month(s).\n", months);

    return 0;
}
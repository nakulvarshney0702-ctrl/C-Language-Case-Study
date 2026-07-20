#include <stdio.h>

int main() {
    float amount, exchange_rate, usd_amount;
    printf("Enter the amount in the base currency: ");
    scanf("%f", &amount);
    printf("Enter the exchange rate: ");
    scanf("%f", &exchange_rate);
    usd_amount = amount / exchange_rate;
    printf("The converted amount is: %.2f\n", usd_amount);
    return 0;
}
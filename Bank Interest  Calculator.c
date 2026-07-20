#include<stdio.h>
int main(){
    float principal, rate, time, si;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    printf("The simple interest is: %.2f\n", si);
    printf("The total amount after %.2f years is: %.2f\n", time, principal + si);
    return 0;
}
#include <stdio.h>
int main(){
    float price1,price2,price3,subtotal,gst,finalTotal;
    printf("Enter the price of item 1: ");
    scanf("%f",&price1);
    printf("Enter the price of item 2: ");
    scanf("%f",&price2);
    printf("Enter the price of item 3: ");
    scanf("%f",&price3);
    subtotal = price1 + price2 + price3;
    gst = subtotal * 0.18;
    finalTotal = subtotal + gst;

    printf("\n----- Supermarket Bill -----\n");
    printf("Subtotal       : Rs. %.2f\n", subtotal);
    printf("GST (18%%)      : Rs. %.2f\n", gst);
    printf("Final Total    : Rs. %.2f\n", finalTotal);
    printf("----------------------------\n");
    return 0;
}
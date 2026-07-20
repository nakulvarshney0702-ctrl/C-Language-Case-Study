#include<stdio.h>
int main()
{
    int recharge_amount,gst_amount,total_bill;
    printf("Enter the recharge amount: ");  
    scanf("%d", &recharge_amount);
    gst_amount = recharge_amount * 0.18; // Assuming 18% GST
    total_bill = recharge_amount + gst_amount;
    printf("The total bill including GST is: %d\n", total_bill);
    return 0;
}
# include <stdio.h>
int main() {
    float weight, cost_per_kg, total_cost;
    printf("Enter the weight of the package in kilograms: ");  
    scanf("%f", &weight);
    printf("Enter the cost per kilogram: ");
    scanf("%f", &cost_per_kg);
    total_cost = weight * cost_per_kg;
    printf("The total cost of delivery is: %.2f\n", total_cost);
    return 0;
}
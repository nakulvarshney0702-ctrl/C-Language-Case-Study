#include <stdio.h>
int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    float average,percentage;
    printf("Enter marks for 5 subjects: ");
    printf("\nSubject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = (float)total / 5;
    percentage = (float)total / 500 * 100;
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}
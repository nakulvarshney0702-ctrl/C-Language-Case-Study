#include<stdio.h>
int main()
{
    int emp_id;
    char emp_name[50];
    float basic_salary, hra, da, gross_salary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", emp_name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    hra = 0.20 * basic_salary;
    da = 0.10 * basic_salary;
    gross_salary = basic_salary + hra + da;

    printf("\nEmployee ID: %d\n", emp_id);
    printf("Employee Name: %s\n", emp_name);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
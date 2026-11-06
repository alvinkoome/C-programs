#include <stdio.h>

int main(void)
{
    int age;
    double income;
    int ch;

    printf("=== Bank Loan Eligibility ===\n\n");

    printf("Enter your age (in years): ");
    if (scanf("%d", &age) != 1 || age <= 0)
    {
        printf("Error: Invalid age entered.\n");
        return 1;
    }

    printf("Enter your annual income (in Sh): ");
    if (scanf("%lf", &income) != 1 || income < 0)
    {
        printf("Error: Invalid income entered.\n");
        return 1;
    }

    printf("\n");

    if (age >= 21 && income >= 21000)
    {
        printf("Congratulations you qualify for a loan.\n");
    }
    else
    {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}

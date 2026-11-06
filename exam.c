#include <stdio.h>

int main(void)
{
    double attendance, averageMarks;
    int ch;

    printf("=== Exam Eligibility Checker ===\n\n");

    printf("Enter attendance percentage: ");
    if (scanf("%lf", &attendance) != 1 || attendance < 0 || attendance > 100)
    {
        printf("Error: Invalid attendance entered.\n");
        return 1;
    }

    printf("Enter average marks: ");
    if (scanf("%lf", &averageMarks) != 1 || averageMarks < 0 || averageMarks > 100)
    {
        printf("Error: Invalid marks entered.\n");
        return 1;
    }

    printf("\n");

    if (attendance >= 75 && averageMarks >= 40)
    {
        printf("Eligible for final exams.\n");
    }
    else
    {
        printf("Not eligible.\n");
    }

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}

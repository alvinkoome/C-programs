#include <stdio.h>

int main()
{
    double units, bill;
    int ch;

    printf("=== Water Bill Calculator ===\n\n");

    printf("Enter water units consumed: ");
    if (scanf("%lf", &units) != 1 || units < 0)
    {
        printf("Error: Invalid units entered.\n");
        return 1;
    }

    if (units <= 30)
    {
        bill = units * 20;
    }
    else if (units <= 60)
    {
        bill = (30 * 20) + ((units - 30) * 25);
    }
    else
    {
        bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);
    }

    printf("Total water bill: %.2f KES\n", bill);

    while ((ch = getchar()) != '\n' && ch != EOF)

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}

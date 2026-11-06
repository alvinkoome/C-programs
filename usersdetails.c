#include <stdio.h>

int main(void)
{
    float height;
    double bankBalance;
    char phoneNumber[20];
    int ch;

    printf("=== User Details Form ===\n\n");

    printf("Enter your height in meters (e.g., 1.75): ");
    if (scanf("%f", &height) != 1 || height <= 0)
    {
        printf("Error: Invalid height entered.\n");
        return 1;
    }

    printf("Enter your bank balance in Kenya Shillings (KES): ");
    if (scanf("%lf", &bankBalance) != 1)
    {
        printf("Error: Invalid bank balance entered.\n");
        return 1;
    }

    printf("Enter your phone number (e.g., 0712345678): ");
    if (scanf("%19s", phoneNumber) != 1)
    {
        printf("Error: Invalid phone number entered.\n");
        return 1;
    }

    printf("\n=== Your Details ===\n");
    printf("Height        : %.2f m\n", height);
    printf("Bank Balance  : KES %.2f\n", bankBalance);
    printf("Phone Number  : %s\n", phoneNumber);

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}

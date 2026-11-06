#include <stdio.h>

int main()
{
    int choice;
    int ch;

    printf("=== Mobile Data Bundles ===\n\n");
    printf("Option  Bundle   Cost (KES)\n");
    printf("1       100 MB   50\n");
    printf("2       500 MB   200\n");
    printf("3       1 GB     350\n");
    printf("4       2 GB     600\n");

    printf("\nEnter your choice (1-4): ");
    if (scanf("%d", &choice) != 1)
    {
        choice = 0;  
    }

    printf("\n");

    switch (choice)
    {
        case 1:
            printf("Bundle selected: 100 MB\n");
            printf("Cost: 50 KES\n");
            break;
        case 2:
            printf("Bundle selected: 500 MB\n");
            printf("Cost: 200 KES\n");
            break;
        case 3:
            printf("Bundle selected: 1 GB\n");
            printf("Cost: 350 KES\n");
            break;
        case 4:
            printf("Bundle selected: 2 GB\n");
            printf("Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}

#include <stdio.h>

#define PI 3.142

int main()
{
    double radius, height;
    double volume, surfaceArea;
    int ch;

    printf("=== Cylinder Calculator ===\n\n");

    printf("Enter the radius of the cylinder: ");
    if (scanf("%lf", &radius) != 1 || radius <= 0)
    {
        printf("Error: Invalid radius entered.\n");
        return 1;
    }

    printf("Enter the height of the cylinder: ");
    if (scanf("%lf", &height) != 1 || height <= 0)
    {
        printf("Error: Invalid height entered.\n");
        return 1;
    }

    volume = PI * radius * radius * height;
    surfaceArea = (2 * PI * radius * radius) + (2 * PI * radius * height);

    printf("\n=== Results ===\n");
    printf("Radius       : %.2f\n", radius);
    printf("Height       : %.2f\n", height);
    printf("Volume       : %.2f cubic units\n", volume);
    printf("Surface Area : %.2f square units\n", surfaceArea);

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}

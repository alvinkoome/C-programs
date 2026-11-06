#include <stdio.h>

int main(void)
{
    const char *units[] = {
        "Introduction to Programming",
        "Data Structures",
        "Computer Networks",
        "Database Systems",
        "Software Engineering"
    };
    int count = sizeof(units) / sizeof(units[0]);
    int i;

    printf("Units Offered This Semester:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, units[i]);
    }

    printf("\n");
    
    return 0;
}

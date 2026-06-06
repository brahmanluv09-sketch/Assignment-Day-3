#include <stdio.h>

int main()
{
    int start, end, i, j,
        Prime;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++)
    {
        if (i <= 1)
            continue;

        Prime = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                Prime = 0;
                break;
            }
        }

        if (Prime)
            printf("%d ", i);
    }

    return 0;
}
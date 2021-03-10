/* #include <stdio.h>
void main()
{
    int j;
    int i;
    int n = 9;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - 1)
                printf("%d, ", i * j);
            else
                printf("%d", i * j);
        }
        printf("\n");
    }
} */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    for (int top = 1; top <= 9; top++)
    {
        printf("\t%d", top);
    }
    printf("\n");

    for (int i = 1; i <= 9; i++)
    {
        printf("%d\t", i);
        for (int c = 1; c <= 9; c++)
        {
            printf("%d\t", i * c);
        }
        printf("\n");
    }

    return 0;
}

/* #include <conio.h>
#include <stdio.h>

int main()
{
    int row, column, y, x;

    for (int top = 1; top <= 9; top++)
    {
        printf("\t%d", top);
    }
    printf("\n");
    for (y = 1; y <= 9; y++)
    {
        printf("%d\t", y);
        for (x = 1; x <= 9; x++)
        {
            printf("%d\t", x * y);
        }
        printf("\n");
    }
    return 0;
} */
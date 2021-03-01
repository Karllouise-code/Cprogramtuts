#include <stdio.h>

int main()
{
    int a, b;
    int product;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    while (b != 0)
    {
        product += a;
        b--;
    }

    printf("\n Product = %d\n", product);
    return 0;
}
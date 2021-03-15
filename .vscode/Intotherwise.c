/* #include <conio.h>
#include <stdio.h>
#define p printf
#define s scanf
int main()

{
    float num1, positive, neg;

    p("Input an integer: ");
    s("%f", &num1);

    positive = num1 * 3;
    neg = num1 * num1;

    if (num1 > 0)
    {
        p("The number you inputed is %.0f and the computed value is %.0f", num1, positive);
    }
    else if (num1 < 0)
    {
        p("The number you inputed is %.0f and the computed value is %.0f", num1, neg);
    }
    else
        printf("The number you inputed is %.0f and the computed value is %.0f", num1, num1 + 5);
    getch();
} */

#include <conio.h>
#include <stdio.h>
#define p printf
#define s scanf
int main()

{
    float num1, positive, neg;

    p("Input an integer: ");
    s("%f", &num1);

    if (num1 > 0)
    {
        p("The number you inputed is %.0f and the computed value is %.0f", num1, num1 * 3);
    }
    else if (num1 < 0)
    {
        p("The number you inputed is %.0f and the computed value is %.0f", num1, num1 * 2);
    }
    else
        printf("The number you inputed is %.0f and the computed value is %.0f", num1, num1 + 5);
    getch();
}

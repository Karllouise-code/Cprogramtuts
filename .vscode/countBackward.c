//* COUNT FORWARD
/* #include <conio.h>
#include <stdio.h>
#define p printf
#define s scanf
int main()

{
    int num;
    int count = 1;

    p("Input a number: ");
    s("%d", &num);

    printf("The output is: ");
    while (count <= num)
    {
        p("%d ", count);
        count++;
    }
    getch();
} */

//* COUNT BACKWARD
#include <conio.h>
#include <stdio.h>
#define p printf
#define s scanf
int main()

{
    int num;
    int end = 1;

    p("Input a number: ");
    s("%d", &num);

    printf("The output is: ");
    while (end <= num)
    {
        p("%d ", num);
        num--;
    }

    getch();
}
//* COUNT FORWARD WHILE LOOPS
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

//* COUNT BACKWARD WHILE LOOPS
/* #include <conio.h> 
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
} */

//* COUNT FORWARD FOR LOOPS
/* #include <conio.h>
#include <stdio.h>
#define p printf
#define s scanf
int main()

{
    int num;

    p("Input a number: ");
    s("%d", &num);

    printf("The output is: ");
    for (int count = 1; count <= num; count++)
    {
        p("%d ", count);
    }
    getch();
} */

//* COUNT BACKWARD FOR LOOPS
#include <conio.h>
#include <stdio.h>
#define p printf
#define s scanf
int main()

{
    int num;
    p("Input a number: ");
    s("%d", &num);

    printf("The output is: ");
    for (int end = 1; num >= end; num--)
    {
        p("%d ", num);
    }

    getch();
}

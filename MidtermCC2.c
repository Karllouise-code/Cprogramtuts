#include <stdio.h>
#include <string.h>

int main()
{

    char name[20];
    char gender;

    printf("Midterm Examination\n");
    printf("Enter Name: ");
    fgets(name, 20, stdin);
    printf("Enter Gender (M/F): ");

    scanf("%c", &gender);

    if (gender == 'M')
    {
        printf("Hello Mr. %s", name);
    }
    else if (gender == 'F')
    {
        printf("Hello Ms. %s", name);
    }
    else
    {
        printf("Wrong Input N/A ");
    }
    return 0;
}

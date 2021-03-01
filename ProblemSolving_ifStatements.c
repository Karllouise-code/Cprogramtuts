#include <stdio.h>
#include <string.h>

int main()
{
    int x, y;
    char Username[100], Password[100];

    printf("Enter Username:");
    scanf("%s", Username);
    printf("Enter Password:");
    scanf("%s", Password);

    x = strcmp(Username, "Karllouise");
    y = strcmp(Password, "Rito");

    if (x == 0 && y == 0)
    {
        printf("Access Granted");
    }

    if (x != 0 && y != 0)
    {
        printf("Access Denied");
    }
    return 0;
}

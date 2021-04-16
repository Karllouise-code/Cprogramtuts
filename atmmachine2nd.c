/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long amount = 5000, deposit, withdraw;
    int choice, k;
    char transaction = 'y';

    do
    {
        printf("\n\t-Welcome to ATM Service-\n");
        printf("[1] Withdraw Money\n");
        printf("[2] Deposit Money\n");
        printf("[3] Check Balance\n");
        printf("[0] Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nOnHand Money: %lu", amount);
            printf("\nBank Money: %lu", withdraw);
            printf("\nHow Much Money You Want to Withdraw: ");
            scanf("%lu", &withdraw);
            if (withdraw > amount)
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {

                amount = amount - withdraw;
                printf("\nPLEASE COLLECT CASH");
                printf("\n OnHand Money: %lu", withdraw);
                printf("\n Your Bank Money: %lu", amount);
            }
            break;
        }
    } while (/* condition */
//);

//return 0;
//}

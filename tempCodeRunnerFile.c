/* #include <stdio.h>
unsigned long onhand = 5000, bankmoney, deposit, withdraw;
int choice, k;
char transaction = 'y';
void main()
{

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
            printf("\nOnHand Money: %lu", onhand);
            printf("\nBank Money: %lu", deposit);
            printf("\nHow Much Money You Want to Withdraw: ");
            scanf("%lu", &withdraw);
            if (withdraw > deposit)
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                printf("\n OnHand Money: %lu", onhand + withdraw);
                withdraw = deposit - withdraw;
                printf("\n Your Bank Money: %lu", withdraw);
            }
            break;

        case 2:
            printf("\nOnHand Money: %lu", onhand);
            printf("\nBank Money: %lu", deposit);
            printf("\n How Much Money You Want to Deposit: ");
            scanf("%lu", &deposit);
            onhand = onhand - deposit;
            printf("Your OnHand Money: %lu", onhand);
            printf("\nYour Bank Money: %lu", deposit);
            break;

        case 3:
            printf("\n Your OnHand Money: %lu ", onhand);
            printf("\n Your Bank Money: %lu ", bankmoney);
            break;

        case 0:
            printf("\n THANK U USING ATM");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    } while (!k);
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
} */

/* #include <stdio.h>
unsigned long amount = 5000, deposit, withdraw;
int choice, k;
int transaction = 1;
void main()
{

    do
    {
        printf("\n\t-Welcome to ATM Service-\n");
        printf("[1] Check Balance\n");
        printf("[2] Withdraw Cash\n");
        printf("[3] Deposit Cash\n");
        printf("[0] Quit\n");
        printf("_____________________________\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BANK MONEY IS : $%lu ", amount);
            break;
        case 2:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);

            if (withdraw > (amount - 500))
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS %lu", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT");
            scanf("%lu", &deposit);
            amount = amount + deposit;
            printf("YOUR BALANCE IS %lu", amount);
            break;
        case 0:
            printf("\n THANK FOR USING ATM");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    } while (!k);
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
} */

#include <stdio.h>
unsigned long onHand = 5000, bankMoney, deposit, withdraw;
int choice, k;
int transaction = 1;
void main()
{

    do
    {
        printf("\n\t-Welcome to ATM Service-\n");
        printf("[1] Check Balance\n");
        printf("[2] Withdraw Cash\n");
        printf("[3] Deposit Cash\n");
        printf("[0] Quit\n");
        printf("_____________________________\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BANK MONEY IS : $%lu ", bankMoney);
            printf("\n YOUR ONHAND MONEY IS: $%lu ", onHand);
            break;
        case 2:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);

            if (withdraw > bankMoney)
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                bankMoney = bankMoney - withdraw;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS %lu", bankMoney);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT: $");
            scanf("%lu", &deposit);
            bankMoney = bankMoney + deposit;
            printf("YOUR BALANCE IS %lu", bankMoney);
            break;
        case 0:
            printf("\n THANK FOR USING ATM");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    } while (!k);
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
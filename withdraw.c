#include "header.h"

A_C* Withdraw_amount(A_C *head)
{
    A_C *temp = head;
    int acc;
    float amount;

    if (head == NULL)
    {
        printf("No accounts exist.\n");
        return head;
    }

    printf("Enter account number: ");
    scanf("%d", &acc);

    while (temp != NULL)
    {
        if (temp->Account_number == acc)
        {
            if (temp->Transaction_count >= ind)
            {
                printf("Transaction limit (%d) reached for this account!\n", ind);
                return head;
            }

            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= 0.0)
            {
                printf("Invalid withdrawal amount. Must be positive.\n");
                return head;
            }

            if (amount > temp->Account_balance)
            {
                printf("Insufficient balance! Available: %.2f\n", temp->Account_balance);
                return head;
            }

            if (temp->A_T.Withdraw == NULL)
            {
                printf("ERROR: Withdraw pointer not allocated!\n");
                return head;
            }
            int min=1000,max=9999;
            srand(time(NULL));
            temp->A_T.Withdraw_id[temp->Transaction_count]=(rand()%(max-min+1))+min;

            temp->Account_balance -= amount;
            temp->A_T.Withdraw[temp->Transaction_count] = amount;
            temp->Transaction_count++;

            printf("Withdrawal successful. New balance: %.2f\n", temp->Account_balance);
            return head;
        }

        temp = temp->Next_A_C;
    }

    printf("Account number %d is not valid.\n", acc);
    return head;
}
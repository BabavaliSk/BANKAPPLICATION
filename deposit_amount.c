#include "header.h"

A_C* Deposit_amount(A_C *head)
{

        if (!head)
        {
                printf("No accounts exist.\n");
                return head;
        }

        int acc;
        float amount;
        printf("Enter account number: ");
        scanf("%d", &acc);
        A_C *temp = head;
        while (temp != NULL)
        {

                if (temp->Account_number == acc)
                {

                         if (temp->Transaction_count >= ind)
                         {

                                 printf("Transaction limit (%d) reached for this account!\n", ind);
                                 return head;
                        }


                        printf("Enter deposit amount: ");
                        scanf("%f", &amount);

                        if (amount <= 0)
                        {
                                printf("Invalid deposit amount. Amount must be positive.\n");
                                return head;
                        }


                        temp->Account_balance += amount;
                        if (!temp->A_T.Deposit)
                        {
                                printf("ERROR: Deposit pointer not allocated!\n");
                                return head;
                        }
                        int min=1000,max=9999;
                        srand(time(NULL));
                        temp->A_T.Deposit_id[temp->Transaction_count]=(rand()%(max-min+1))+min;
                        temp->A_T.Deposit[temp->Transaction_count] = amount;
                        temp->Transaction_count++;

                        printf("Deposit successful. New balance: %.2f\n", temp->Account_balance);
                         return head;
                }
                temp = temp->Next_A_C;
    }

    printf("Account number %d is not valid.\n", acc);
    return head;
}
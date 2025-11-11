#include "header.h"

void Trsnsaction_history(A_C *head)
{
    printf("Enter account number:\n");
    int acc;
    scanf("%d", &acc);

    A_C *temp = head;
    while (temp)
    {
        if (temp->Account_number == acc)
        {
            printf("Account Name      : %s\n", temp->Account_name);
            printf("Mobile Number     : %s\n", temp->Mobile_num);
            printf("Account Number    : %d\n", temp->Account_number);
            printf("Account Balance   : %.2f\n", temp->Account_balance);
            printf("Transaction Count : %d\n", temp->Transaction_count);

            printf("Deposits:\n");
            printf("--------------------------\n");
            printf("%-5s | %-10s | %s\n", "Index", "Deposit_id","Amount");
            printf("--------------------------\n");
            if (temp->A_T.Deposit != NULL && temp->Transaction_count > 0)
            {
                for (int i = 0; (i < temp->Transaction_count); i++)
                {
                        if (temp->A_T.Deposit[i])
                        {
                                printf("%-5d | %-10d | %.2f\n",i+1,temp->A_T.Deposit_id[i], temp->A_T.Deposit[i]);
                        }
                }
            }
            else
            {
                printf("None");
            }
            printf("\n");

            printf("Withdrawals:\n");
            printf("--------------------------\n");
            printf("%-5s | %-10s | %s\n", "Index","Withdraw_id", "Amount");
            printf("--------------------------\n");
            if (temp->A_T.Withdraw != NULL && temp->Transaction_count > 0)
            {
                for (int i = 0; i < temp->Transaction_count; i++)
                {
                        if (temp->A_T.Withdraw[i])
                        {
                                printf("%-5d | %-10d | %.2f\n",i+1, temp->A_T.Withdraw_id[i],temp->A_T.Withdraw[i]);
                        }
                }
            }
            else
            {
                printf("None");
            }
            printf("\n");

            return;
        }
        temp = temp->Next_A_C;
    }

    printf("Account number %d not found.\n", acc);
}
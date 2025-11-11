#include "header.h"
void Display_all_accounts_details(A_C *head)
{


        if (head == NULL)
        {
                printf("No accounts to display.\n");
                return;
        }
        puts("-----********-----");
        A_C *temp=head;
        while(temp)
        {

                printf("Account_name : %s\n",temp-> Account_name);
                printf("number :91+ %s\n",temp->Mobile_num);
                printf("Account_number : %d\n",temp->Account_number);
                printf("Account_balance : %.2f\n",temp->Account_balance);
                printf("Transaction_count : %d\n",temp->Transaction_count);
                puts("-----********-----");
                temp=temp->Next_A_C;
        }
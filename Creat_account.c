#include"header.h"

A_C *Creat_account(A_C *head)
{

        A_C *New_Account;
                New_Account=malloc(sizeof(A_C));
                printf("Enter Name\n");
                __fpurge(stdin);
                //fgets(New_Account->Account_name,21,stdin);
                scanf("%[^\n]s",New_Account->Account_name);
                //New_Account->Account_name[20]='\0';
                srand(time(NULL));
                int min=1000000,max=9999999;
                New_Account->Account_number=(rand()%(max-min+1))+min;
                printf("enter mobile number\n");
                scanf("%s",New_Account->Mobile_num);
                New_Account->Account_balance=0;
               // New_Account->A_T.Withdraw=0;
                //New_Account->A_T.Deposit=0;
                New_Account->Transaction_count=0;
                New_Account->A_T.Deposit = malloc(ind * sizeof(float));
                New_Account->A_T.Withdraw = malloc(ind * sizeof(float));
                New_Account->A_T.Deposit_id = malloc(ind * sizeof(int));
                New_Account->A_T.Withdraw_id = malloc(ind * sizeof(int));
                if (!New_Account->A_T.Deposit)
                {
                        printf("Memory allocation for Deposit failed!\n");
                        free(New_Account);
                        return head;
                }
                for (int i = 0; i < ind; i++)
                {
                        New_Account->A_T.Deposit[i] = 0.0;
                        New_Account->A_T.Withdraw[i] = 0.0;
                         New_Account->A_T.Deposit_id[i] = 0;
                        New_Account->A_T.Withdraw_id[i] = 0;
                }
                New_Account->Next_A_C=NULL;


                if (head==NULL)
                {
                        head=New_Account;
                        //return head;

                }
                else
                {
                        A_C *temp=head;
                        while(temp->Next_A_C)
                        {
                                temp=temp->Next_A_C;
                        }
                        temp->Next_A_C=New_Account;
                }
                printf("Account created successfully. Account number: %d\n", New_Account->Account_number);
                return head;
}
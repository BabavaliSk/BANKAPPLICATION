
#include "header.h"
A_C* synk(A_C* head)
{
        int size=sizeof (A_C)-sizeof(A_C*);
        A_C var,*node,*temp;
        FILE *fptr;
        fptr=fopen("record.txt","rb");
        if (fptr)
        {
                while(fread(&var,size,1,fptr))
                {
                        node=malloc(sizeof(A_C));
                        strcpy(node->Mobile_num, var.Mobile_num);
                        strcpy(node->Account_name,var.Account_name);
                        node->Account_number=var.Account_number;
                        node->Account_balance=var.Account_balance;
                        node->Transaction_count=var.Transaction_count;
                        node->A_T.Deposit=malloc(ind*sizeof(float));
                        node->A_T.Withdraw_id= malloc(ind * sizeof(int));
                        node->A_T.Deposit_id=malloc(ind*sizeof(int));
                        node->A_T.Withdraw = malloc(ind * sizeof(float));
                        fread(node->A_T.Deposit, sizeof(float), ind, fptr);
                        fread(node->A_T.Withdraw, sizeof(float), ind, fptr);
                        fread(node->A_T.Deposit_id, sizeof(int), ind, fptr);
                        fread(node->A_T.Withdraw_id, sizeof(int), ind, fptr);
                        node->Next_A_C=0;
                        if (head==NULL)
                        {
                                head=node;
                        }
                        else
                        {
                                temp=head;
                                while(temp->Next_A_C)
                                {
                                        temp=temp->Next_A_C;
                                }
                                temp->Next_A_C=node;
                        }

                }
                 printf("record syncing successfylly done\n");
                 printf("iam in  synkfromfile1.c\n");
                fclose(fptr);
        }
        return head;
}

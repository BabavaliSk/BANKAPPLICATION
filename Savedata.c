
#include "header.h"
void Save_the_accounts_info_in_file(A_C*head)
{
        if (head==NULL)
        {
                printf("no records available for saving\n");
                return;
        }
        FILE *fptr=NULL;
        fptr=fopen("record.txt","wb");
        if (fptr==NULL)
        {
                printf("file is not open\n");
                return;
        }

        int size=sizeof(A_C)-sizeof(A_C*);
        A_C* temp=head;
        while(temp)
        {
                fwrite(temp,size,1,fptr);
                fwrite(temp->A_T.Deposit, sizeof(float), ind, fptr);
                fwrite(temp->A_T.Withdraw, sizeof(float), ind, fptr);
                fwrite(temp->A_T.Deposit_id, sizeof(int), ind, fptr);
                fwrite(temp->A_T.Withdraw_id, sizeof(int), ind, fptr);
                temp=temp->Next_A_C;
        }
        printf("data saved successfully\n");
        printf("iam in  Save_the_accounts_info_in_file.c\n");
        fclose(fptr);
}
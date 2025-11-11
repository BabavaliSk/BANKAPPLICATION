#include "header.h"

#define USER_ID "BANK_ID"
#define PASSWORD "PASSWORD"
void Balance_enquery(A_C *head)
{
        A_C *temp=head;
        int accno,n=5;
        while(n>0)
        {
        printf("enter account number\n");
        scanf("%d",&accno);


        char user_id[20],password[20];
        printf("enter user id\n");
        scanf("%s",user_id);
        printf("enter password\n");
        scanf("%s",password);

        if ((strcmp(USER_ID,user_id)==0) && (strcmp(PASSWORD,password)==0))
        {
                int cnt=0;
                while(temp)
                {
                        if (temp->Account_number==accno)
                        {
                                cnt++;
                                break;
                        }
                        else
                        {
                                temp=temp->Next_A_C;
                        }
                }
                if (cnt==1)
                {
                         printf("Account_name : %s\n",temp-> Account_name);
                         printf("mobile number : %s\n",temp->Mobile_num);
                         printf("Account_balance : %.2f\n",temp->Account_balance);
                         return;
                }
                else
                {

                        printf("account number is not found\n");
                }
        }
        else
        {
                printf("PASSWORD (OR) USER ID IS NOT CORRECT\n");
        }
        n--;

        }
}

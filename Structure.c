#define ind 5
typedef struct acc
{
        int Account_number;
        char Mobile_num[11];
        char Account_name[21];
        float Account_balance;
         int Transaction_count;

        struct Account_Transactions
        {
                //int T_id[ind];
                float *Withdraw;
                float *Deposit;
                int *Deposit_id;
                int *Withdraw_id;
        }A_T;
        struct acc *Next_A_C;
}A_C;
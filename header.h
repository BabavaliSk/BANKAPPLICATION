#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<time.h>
#include"structure.c"
char printmenu();
A_C *Creat_account(A_C *);
void Display_all_accounts_details(A_C *);
void Searching_for_specific_account(A_C *);
A_C* Deposit_amount(A_C *head);
void Save_the_accounts_info_in_file(A_C *head);
A_C*  synk(A_C* head);
void Trsnsaction_history(A_C *head );
A_C* Withdraw_amount(A_C *head);
void Balance_enquery(A_C *head);
A_C *Transfar_money(A_C *head);
void Quit_from_app();
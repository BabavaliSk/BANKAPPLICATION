#include"header.h"
int main()
{
        A_C *head=NULL;
        char choice;
        while(1)
        {
                choice=printmenu();
                switch(choice)
                {
                        case 'c':
                        case 'C':head=Creat_account(head);
                                 break;
                        case'h':
                        case'H':Trsnsaction_history(head);
                                break;
                        case'd':
                        case'D':head=Deposit_amount(head);
                                break;
                        case'b':
                        case'B':Balance_enquery(head);
                                break;
                        case't':
                        case'T':head=Transfar_money(head);
                                break;
                        case'e':
                        case'E':Display_all_accounts_details(head);
                                break;
                        case's':
                        case'S':Save_the_accounts_info_in_file(head);
                                break;
                        case 'R':
                        case 'r':head=synk(head);
                                break;
                        case 'W':
                        case 'w':head=Withdraw_amount(head);
                                 break;

                        case'f':
                        case'F':Searching_for_specific_account(head);
                               break;

                        case'q':
                        case'Q':Quit_from_app();
                                break;
                }
        }

}
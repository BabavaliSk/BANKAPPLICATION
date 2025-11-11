#include"header.h"
char printmenu()
{
        char choice;
        printf("------*******BANK SYSTEM********-------\n");
        printf(" c/C:Create account\n h/H:Transaction history\n  w/W:Withdraw amount\n d/D:Deposit amount\n b/B:Balance enquiry\n t/T:Transfer money\n e/E:Display all accounts details\n s/S:Save the accounts info in file\n f/F:searching for specific account\n r:synk data from file\n q/Q:Quit from app\n");

        printf("------***************-------\n");
        printf("enter choice:");
        __fpurge(stdin);
        scanf("%c",&choice);
        return choice;
}

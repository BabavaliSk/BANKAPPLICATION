a.out:printmenu.o Display.o  Transfar_money.o Quit_from_app.o Withdraw_amount.o structure.o Balance_enquery.o Trsnsaction_history.o Creat_account.o Bank_app.o Searching_for_account.o Deposit_amount1.o  Save_the_accounts_info_in_file.o  synkfromfile1.o
        cc printmenu.o Display.o Withdraw_amount.o Transfar_money.o Quit_from_app.o Balance_enquery.o structure.o Creat_account.o  Trsnsaction_history.o Bank_app.o Searching_for_account.o Deposit_amount1.o Save_the_accounts_info_in_file.o synkfromfile1.o  -o a.out

printmenu.o:printmenu.c
        cc -c printmenu.c
Transfar_money.o:Transfar_money.c
        cc -c Transfar_money.c
Quit_from_app.o:Quit_from_app.c
        cc -c Quit_from_app.c
Balance_enquery.o:Balance_enquery.c
        cc -c Balance_enquery.c
Display.o:Display.c
        cc -c Display.c
structure.o:structure.c
        cc -c structure.c
Creat_account.o:Creat_account.c
        cc -c Creat_account.c
Bank_app.o:Bank_app.c
        cc -c Bank_app.c
Searching_for_account.o: Searching_for_account.c
        cc -c Searching_for_account.c
Deposit_amount1.o:Deposit_amount1.c
        cc -c Deposit_amount1.c
Save_the_accounts_info_in_file.o:Save_the_accounts_info_in_file.c
        cc -c Save_the_accounts_info_in_file.c

synkfromfile1.o:synkfromfile1.c
        cc -c synkfromfile1.c
Trsnsaction_history.o:Trsnsaction_history.c
        cc -c Trsnsaction_history.c
Withdraw_amount.o:Withdraw_amount.c
        cc -c Withdraw_amount.c

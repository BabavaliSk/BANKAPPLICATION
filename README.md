Bank App C Project

This is my simple bank management system written in C. Each function is in a separate C file and all files are compiled together using a Makefile.

Features

Create account
Deposit money
Withdraw money
Transfer money
Check balance
View account details
Transaction history
Save and load account data
Exit the app safely

Files in this Project
Bank_app.c - Main program file that contains the main function
Creat_account.c - Handles creation of new accounts
Display.c - Displays account information
Withdraw_amount.c - Handles withdrawal of money
Deposit_amount1.c - Handles deposits
Transfar_money.c - Transfers money between accounts
Balance_enquery.c - Checks balance
Trsnsaction_history.c - Maintains and displays transaction history
Searching_for_account.c - Searches account by name or number
Save_the_accounts_info_in_file.c - Saves data to file
synkfromfile1.c - Loads data from file
Quit_from_app.c - Quits the program safely
structure.c - Defines the structures used across files
printmenu.c - Displays menu options to the user

How to Run

Clone the repo
git clone https://github.com/your-username/your-repo-name.git

cd your-repo-name

Build the project
make

Run the program
./a.out

Clean files
make clean

About the Makefile

The Makefile compiles all C files into object files and links them to create a.out automatically.

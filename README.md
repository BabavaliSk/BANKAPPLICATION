#File-Based Banking Management System in C
This is a menu-driven banking application developed in the C programming language. It uses linked lists and file handling to manage customer account data. The application performs core banking operations such as account creation, deposit, withdrawal, balance inquiry, and transaction history. All data is stored in text files to ensure it is saved and loaded between sessions.

Features
Create new customer bank accounts

Deposit and withdraw money

View account balance

Maintain transaction history

Persistent data storage using text files

Input validation and error handling

Modular code using separate functions

Build system using Makefile

Project Structure
main.c
banking.c
banking.h
Makefile
data.txt
transactions.txt
README.md

Build and Run Instructions
Prerequisites
GCC compiler

Make utility

Build the Project
Run the following command in your terminal:

make

Run the Program
After building, run the executable:

./bank

Clean the Build Files
To remove object files and the executable:

make clean

File Descriptions
main.c - Entry point of the program; handles user input and menu

banking.c - Contains the implementation of banking operations

banking.h - Header file with structure definitions and function declarations

data.txt - Text file used to store customer account information

transactions.txt - Text file that stores transaction logs

Makefile - Automates compilation of source files into an executable

Functionalities
Account creation: Adds new customer records to the file and linked list

Deposit: Adds a specified amount to a customer’s balance

Withdraw: Deducts an amount, ensuring sufficient balance

Balance inquiry: Displays the current balance of an account

Transaction history: Lists past transactions for an account

Input Validations
Prevents duplicate account numbers

Checks for sufficient balance before withdrawal

Handles invalid menu selections

Validates file access and availability

Future Enhancements
Add password-based account login

Use binary files for faster and more secure storage

Implement a user interface using a GUI framework

Add interest calculation and monthly statement generation

License
This project is not licensed for public use. It is intended for personal and educational reference only.


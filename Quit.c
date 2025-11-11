#include "header.h"
void Quit_from_app()
{
        char choice;
        printf("Are you sure you want to exit? (Y/N): ");
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
                 printf("*******************************************\n");
                 printf("*    Thank you for banking with us        *\n");
                 printf("*       See you again soon!               *\n");
                 printf("*******************************************\n");
                exit(0);
        }

        else
        {
                printf("Returning to main menu...\n");
        }
}

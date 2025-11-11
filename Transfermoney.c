#include "header.h"

A_C *Transfar_money(A_C *head)
{
    int src_acc, dest_acc;
    float amount;
    A_C *src = NULL, *dest = NULL;

    printf("Enter source account number: ");
    scanf("%d", &src_acc);

    printf("Enter destination account number: ");
    scanf("%d", &dest_acc);

    if (src_acc == dest_acc) {
        printf("Source and destination account numbers cannot be the same.\n");
        return head;
    }

    A_C *temp = head;

    while (temp != NULL)
    {
        if (temp->Account_number == src_acc)
            src = temp;
        else if (temp->Account_number == dest_acc)
            dest = temp;

        temp = temp->Next_A_C;
    }

    if (!src || !dest)
    {
        printf("One or both account numbers not found.\n");
        return head;
    }

    printf("Enter amount to transfer: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount. Must be positive.\n");
        return head;
    }

    if (src->Account_balance < amount)
    {
        printf("Insufficient balance in source account.\n");
        return head;
    }

    if (src->Transaction_count >= ind || dest->Transaction_count >= ind)
    {
        printf("Transaction history full. Cannot store more.\n");
        return head;
    }

    src->Account_balance -= amount;
    dest->Account_balance += amount;

    int min = 1000, max = 9999;
    srand(time(NULL));

    src->A_T.Withdraw_id[src->Transaction_count] = (rand() % (max - min + 1)) + min;
    src->A_T.Withdraw[src->Transaction_count] = amount;
    src->Transaction_count++;

    dest->A_T.Deposit_id[dest->Transaction_count] = (rand() % (max - min + 1)) + min;
    dest->A_T.Deposit[dest->Transaction_count] = amount;
    dest->Transaction_count++;

    printf("Transfer successful! %.2f transferred from %d to %d.\n", amount, src_acc, dest_acc);
    return head;
}
#include <iostream>
#include "bank.h"
using namespace std;

BankAccount::BankAccount()
{
    balance = 0;
}
void BankAccount::deposit(double amount)
{
    balance = balance + amount;
}

void BankAccount::display()
{
    cout << "Balance : " << balance << endl;
}

#include <iostream>
#include "bank.h"

using namespace std;

int main()
{   
    double amount;
    cout << "Enter deposit : ";
    cin >> amount;
    BankAccount account;
    account.deposit(amount);
    account.display();
    return 0;
}

/*
Operator Overloading 
You are creating a program for a Bank to manage Accounts.

The given code declares an Account class which has a balance and interest members.

The bank asks you to add a new functionality to merge two accounts together, resulting in a new account with the sum of the balances and interests of the given accounts.

Overload the + operator to allow adding two Account objects, adding the balances and interests.

*/

#include <iostream>
using namespace std;

class Account {
    private:
        int balance=0;
        int interest=0;
    public:
        Account() {}
        Account(int a): balance(a) 
        {
            interest += balance/10;
        }
        int getTotal() {
            return balance+interest;
        }
        Account operator+(Account &obj){
            Account Account(balance+obj.balance); 
        return Account;
        }
        

};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    Account a(n1);
    Account b(n2);
    Account res = a+b;

    cout << res.getTotal();
}
#include<iostream>
using namespace std;

class E_bill {
public:
    int c_id;
    char c_name[20];
    char c_address[30];
    int units;
    double amt;

    void get_UserData() {
        cout << "------------------" << endl;
        cout << "Enter Customer ID" << endl;
        cin >> c_id;
        cout << "Enter Customer Name" << endl;
        cin >> c_name;
        cout << "Enter Customer Address" << endl;
        cin >> c_address;
        cout << "Enter Units" << endl;
        cin >> units;
    }
};

class e_bill : public E_bill {
public:
    void calc_UserData() {
        if (units <= 100) {
            amt = units * 1.20;
        }
        else if (units > 100 && units <= 200) {
            amt = 100 * 1.20 + (200 - units) * 2;
        }
        else if (units > 200 && units <= 300) {
            amt = 100 * 1.20 + 100 * 2 + (300 - units) * 3;
        }
        else {
            amt = 100 * 1.20 + 100 * 2 + 100 * 3 + (units - 300) * 4;
        }
    }
};

class bill : public e_bill {
public:
    void display_UserData() {
        cout << "--------Electricity Bill---------" << endl;
        cout << "Customer ID: " << c_id << endl;
        cout << "Customer Name: " << c_name << endl;
        cout << "Customer Address: " << c_address << endl;
        cout << "Total Bill Amount: Rs." << amt << endl;
    }
};

int main() {
    bill call;
    call.get_UserData();
    call.calc_UserData();
    call.display_UserData();
    return 0;
}

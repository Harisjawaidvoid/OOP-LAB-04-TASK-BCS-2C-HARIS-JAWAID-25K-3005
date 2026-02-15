//HARIS JAWAID 25K-3005 BCS-2C

#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double balance) {
        this->balance = balance;
        cout << "Object address: " << this << endl;
    }

    void setBalance(double balance) {
        this->balance = balance;
    }

    void display() {
        cout << "Balance: " << this->balance << endl;
    }
};

int main() {
    Account a1(1000.0);
    a1.display();

    a1.setBalance(2500.0);
    a1.display();

    return 0;
}

//HARIS JAWAID 25K-3005 BCS-2C

#include <iostream>
using namespace std;

class Account {
private:
    char type[20];
    double balance;

public:
    Account() {
        type[0] = 'G';
        type[1] = '\0';
        balance = 0.0;
        cout << "Default Constructor at: " << this << endl;
    }

    Account(const char t[], double b) {
        int i = 0;
        while (t[i] != '\0' && i < 19) {
            type[i] = t[i];
            i++;
        }
        type[i] = '\0';
        balance = b;
        cout << "Parameterized Constructor at: " << this << endl;
    }

    Account(const Account &obj) {
        int i = 0;
        while (obj.type[i] != '\0') {
            type[i] = obj.type[i];
            i++;
        }
        type[i] = '\0';
        balance = obj.balance;
        cout << "Copy Constructor at: " << this << " (Copied from " << &obj << ")" << endl;
    }

    void display() {
        cout << "Type: " << type << " | Balance: " << balance << endl;
    }
};

int main() {
    Account a1;
    a1.display();

    Account a2("Savings", 5000.0);
    a2.display();

    Account a3 = a2;
    a3.display();

    return 0;
}

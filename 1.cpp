//HARIS JAWAID 25K-3005 BCS-2C

#include <iostream>
using namespace std;

class employee {
private:
    int id;
    double salary;

public:
    employee() {
        id = 0;
        salary = 0.0;
        cout << "Constructor called!" << endl;
    }

    void display() {
        cout << "ID: " << id << " | Salary: " << salary << endl;
    }
};

int main() {
    employee emp1;
    employee emp2;
    employee emp3;

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}

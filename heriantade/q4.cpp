#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    string address;
public:
    void set_person_info(string n, string a) {
        name = n;
        address = a;
    }
    void print_person_info() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Employee : public Person {
protected:
    int id;
    float salary;
public:
    void set_employee_info(int i, float s) {
        id = i;
        salary = s;
    }
    void print_employee_info() {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;

    string name, address;
    int id;
    float salary;

    cout << "Enter employee name: ";
    cin>> name;

    cout << "Enter employee address: ";
    cin>> address;

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter employee salary: ";
    cin >> salary;

    emp.set_person_info(name, address);
    emp.set_employee_info(id, salary);

    cout << "Employee information:" << endl;
    emp.print_person_info();
    emp.print_employee_info();

    return 0;
}
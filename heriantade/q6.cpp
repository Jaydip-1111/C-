#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void set_person(string n, int a) {
        name = n;
        age = a;
    }
};

class Employee : public Person {
protected:
    int emp_id;
public:
    void set_employee(int id) {
        emp_id = id;
    }
};

class Manager : public Employee {
protected:
    string department;
public:
    void set_manager(string dept) {
        department = dept;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager mgr;

    string name, dept;
    int age, emp_id;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter employee ID: ";
    cin >> emp_id;

    cout << "Enter department: ";
    cin >> dept;

    mgr.set_person(name, age);
    mgr.set_employee(emp_id);
    mgr.set_manager(dept);

    mgr.display();

    return 0;
}
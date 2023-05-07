#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;
public:
    void set_value(string n, int a) {
        name = n;
        age = a;
    }
};

class Zebra : public Animal {
public:
    void display() {
        cout << "The zebra named " << name << " is " << age << " years old and comes from Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    void display() {
        cout << "The dolphin named " << name << " is " << age << " years old and comes from the ocean." << endl;
    }
};

int main() {
    Zebra z;
    Dolphin d;

    z.set_value("Ziggy", 5);
    d.set_value("Daisy", 10);

    z.display();
    d.display();

    return 0;
}
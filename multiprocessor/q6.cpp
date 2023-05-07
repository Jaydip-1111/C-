#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass() : value(0) {}
    MyClass(int val) : value(val) {}

    MyClass operator+(const MyClass& other) const {
        return MyClass(value + other.value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    MyClass sum = obj1 + obj2;

    cout << "Sum of obj1 and obj2 = " << sum.getValue() << endl;

    return 0;
}
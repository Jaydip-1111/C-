#include <iostream>

using namespace std;

class MyClass {
public:
    void func() {
        cout << "func() called with no arguments" << endl;
    }

    void func(int arg1) {
        cout << "func(" << arg1 << ") called with 1 argument" << endl;
    }

    void func(int arg1, int arg2) {
        cout << "func(" << arg1 << ", " << arg2 << ") called with 2 arguments" << endl;
    }

    void func(int arg1, int arg2, int arg3) {
        cout << "func(" << arg1 << ", " << arg2 << ", " << arg3 << ") called with 3 arguments" << endl;
    }
};

int main() {
    MyClass obj;

    obj.func();
    obj.func(1);
    obj.func(2, 3);
    obj.func(4, 5, 6);

    return 0;
}
#include <iostream>

using namespace std;

class Number {
protected:
    int num;
public:
    void set_number(int n) {
        num = n;
    }
};

class Square : public Number {
public:
    int get_square() {
        return num * num;
    }
};

class Cube : public Number {
public:
    int get_cube() {
        return num * num * num;
    }
};

int main() {
    Square sq;
    Cube cb;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    sq.set_number(num);
    cb.set_number(num);

    cout << "Square of " << num << " is " << sq.get_square() << endl;
    cout << "Cube of " << num << " is " << cb.get_cube() << endl;

    return 0;
}
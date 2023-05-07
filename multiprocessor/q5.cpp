#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(2) {}

    void operator++() {
        count++;
    }

    void operator--() {
        count--;
    }

    void display() {
     cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c;

    ++c;
    c.display();

    --c;
    c.display();

    return 0;
}
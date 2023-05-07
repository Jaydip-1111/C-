#include <iostream>
#include <string>

using namespace std;

class Message {
private:
    string msg;
public:
    Message(string str="") {
        msg = str;
    }
    void print() {
        cout << msg << endl;
    }
    void print(string additionalMsg) {
        cout << msg << " " << additionalMsg << endl;
    }
};

int main() {
    Message msg1("Hello");
    Message msg2("Hi");

    msg1.print(); 
    msg2.print("there"); 

    return 0;
}
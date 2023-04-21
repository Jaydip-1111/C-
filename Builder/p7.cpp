#include<iostream>
using namespace std;
class Area {
          int radius;
          public:
           void get() {
            cout << "Enter the radius of Circle : ";
            cin >> radius;
    }
    friend float cal(Area ob);
};

float cal(Area ob) {
    return 3.14 * ob.radius * ob.radius;
}

int main() {
    Area object;
    object.get();
    std::cout<<"\nArea of Circle : "<<cal(object);
}
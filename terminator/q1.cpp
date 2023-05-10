#include <iostream>
#include <exception>
using namespace std;

class Motor {
public:
    Motor() {
        throw :: runtime_error("Motor error");
    }
};

class Car {
public:
    Car() {
        try {
            motor = new Motor();
        } catch (...) {
            delete motor;
            throw;
        }
    }
    ~Car() {
        delete motor;
    }
private:
    Motor* motor;
};

class Garage {
public:
    Garage() {
        try {
            car = new Car();
        } catch (std::exception& e) {
            delete car;
            throw :: runtime_error("Garage error: " + std::string(e.what()));
        }
    }
    ~Garage() {
        delete car;
    }
private:
    Car* car;
};

int main() {
    try {
        Garage garage;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
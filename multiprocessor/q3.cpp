#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal is making a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog is barking" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    Animal *a1 = new Animal();
    Animal *a2 = new Dog();
    Animal *a3 = new Cat();

    a1->makeSound(); 
    a2->makeSound(); 
    a3->makeSound(); 

    return 0;
}







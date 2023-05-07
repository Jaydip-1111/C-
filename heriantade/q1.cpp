#include <iostream>

using namespace std;

class Shape {
protected:
    int width;
    int height;
public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    virtual int area() {
        return 0;
    }
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}
    int area() {
        return (width * height) / 2;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h){}
    int area() {
        return width * height;
    }
    
};

int main() {
    Triangle t(5, 10);
    Rectangle r(8, 12);

    cout << "Triangle area: " << t.area() << endl;
    cout << "Rectangle area: " << r.area() << endl;

    return 0;
}
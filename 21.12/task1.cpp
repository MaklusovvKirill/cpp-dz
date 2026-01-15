#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;
public:
    Shape(string c) : color(c) {}
    void printColor() {
        cout << "Цвет: " << color << "\n";
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(string c, double r) : Shape(c), radius(r) {}
    double area() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(string c, double w, double h) : Shape(c), width(w), height(h) {}
    double area() {
        return width * height;
    }
};

// SHAPE AREA SYSTEM USING PURE VIRTUAL FUNCTION

#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};

class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() override {
        return side * side;
    }
};

int main() {
    Shape* shape = NULL;
    int choice;

    cout << "Select Shape:\n";
    cout << "1. Circle\n2. Rectangle\n3. Square\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            shape = new Circle(r);
            break;
        }
        case 2: {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            shape = new Rectangle(l, w);
            break;
        }
        case 3: {
            double s;
            cout << "Enter side: ";
            cin >> s;
            shape = new Square(s);
            break;
        }
        default:
            cout << "Invalid choice.\n";
            return 0;
    }

    cout << "Area = " << shape->area() << endl;

    delete shape;
    return 0;
}


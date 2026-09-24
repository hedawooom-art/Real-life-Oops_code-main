#include <iostream>
#include <vector>
using namespace std;


// Abstract Base Class
class Shape {
public:

    // Pure virtual functions
    virtual double calculateArea() const = 0;
    virtual void showShape() const = 0;

    // Virtual destructor
    virtual ~Shape() {
    }
};


// Circle Class
class Circle : public Shape {
private:
    double r;

public:

    Circle(double radius) {
        r = radius;
    }


    virtual double calculateArea() const {
        return 3.14159 * r * r;
    }


    virtual void showShape() const {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << r << endl;
    }
};


// Rectangle Class
class Rectangle : public Shape {
private:
    double length;
    double width;

public:

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }


    virtual double calculateArea() const {
        return length * width;
    }


    virtual void showShape() const {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};


// Triangle Class
class Triangle : public Shape {
private:
    double base;
    double height;

public:

    Triangle(double b, double h) {
        base = b;
        height = h;
    }


    virtual double calculateArea() const {
        return 0.5 * base * height;
    }


    virtual void showShape() const {
        cout << "Shape: Triangle" << endl;
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};


int main() {

    // C++98 compatible vector
    vector<Shape*> shapes;


    // Create Circle object
    shapes.push_back(
        new Circle(7)
    );


    // Create Rectangle object
    shapes.push_back(
        new Rectangle(5, 9)
    );


    // Create Triangle object
    shapes.push_back(
        new Triangle(6, 7)
    );


    cout << "===== SHAPE AREA SYSTEM =====" << endl;


    // C++98 compatible iterator
    vector<Shape*>::iterator s;


    for (s = shapes.begin();
         s != shapes.end();
         ++s) {

        (*s)->showShape();

        cout << "Area: "
             << (*s)->calculateArea()
             << " square units"
             << endl;

        cout << "------------------------" << endl;
    }


    // Free dynamically allocated memory
    for (s = shapes.begin();
         s != shapes.end();
         ++s) {

        delete *s;
    }


    return 0;
}

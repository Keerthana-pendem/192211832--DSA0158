#include <iostream>
using namespace std;
class Shape {
public:
    virtual double volume() const = 0;
};
class Rectangle : public Shape {
protected:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const {
        return length * width;
    }
};
class Cuboid : public Rectangle {
private:
    double height;
public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}
    double volume() const override {
        return area() * height;
    }
    void display() const {
        cout << "Area of the rectangle (base): " << area() << endl;
        cout << "Volume of the cuboid: " << volume() << endl;
    }
};
int main() {
    double length, width, height;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the cuboid: ";
    cin >> height;
    Cuboid cuboid(length, width, height);
    cuboid.display();
    return 0;
}

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    // Constructor to initialize data members
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    // Inline function declaration
    inline float area();

    // Function declaration
    float perimeter();
};

// Inline function definition outside the class
inline float Rectangle::area() {
    return length * breadth;
}

// Function definition outside the class
float Rectangle::perimeter() {
    return 2 * (length + breadth);
}

int main() {
    float l, b;

    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter breadth of rectangle: ";
    cin >> b;

    // Object creation
    Rectangle r1(l, b);

    // Display area and perimeter
    cout << "\nArea of Rectangle = " << r1.area() << endl;
    cout << "Perimeter of Rectangle = " << r1.perimeter() << endl;

    return 0;
}

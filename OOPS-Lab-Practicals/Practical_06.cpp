#include <iostream>
using namespace std;

class Currency {
private:
    float value;

public:
    // Default constructor
    Currency() {
        value = 0;
    }

    // Constructor for basic to class conversion
    Currency(float v) {
        value = v;
    }

    // Function to display currency value
    void display() {
        cout << "Currency Value = " << value << endl;
    }

    // Class to basic conversion
    operator float() {
        return value;
    }
};

int main() {
    float amount;

    cout << "Enter currency amount: ";
    cin >> amount;

    // Basic to class conversion
    Currency c1 = amount;

    cout << "\nAfter Basic to Class Conversion:" << endl;
    c1.display();

    // Class to basic conversion
    float result = c1;

    cout << "\nAfter Class to Basic Conversion:" << endl;
    cout << "Float Value = " << result << endl;

    return 0;
}

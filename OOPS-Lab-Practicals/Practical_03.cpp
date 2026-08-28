#include <iostream>
using namespace std;

// Class declaration
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Function to accept student data
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student data
    void displayData() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Object creation
    Student s1;

    // Function calls
    s1.getData();
    s1.displayData();

    return 0;
}

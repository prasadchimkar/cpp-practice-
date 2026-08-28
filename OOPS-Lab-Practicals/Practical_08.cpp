#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Function to set data using this pointer
    void setData(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Marks        : " << marks << endl;
    }
};

int main() {
    Student s1;

    // Setting data
    s1.setData("Prasad", 90);

    // Displaying data
    s1.display();

    return 0;
}

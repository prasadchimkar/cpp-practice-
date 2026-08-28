#include <iostream>
using namespace std;

// Base class
class University {
protected:
    string universityName;

public:
    void setUniversity() {
        cout << "Enter University Name: ";
        getline(cin, universityName);
    }
};

// Derived class from University
class College : public University {
protected:
    string collegeName;

public:
    void setCollege() {
        cout << "Enter College Name: ";
        getline(cin, collegeName);
    }
};

// Derived class from College
class Department : public College {
private:
    string departmentName;

public:
    void setDepartment() {
        cout << "Enter Department Name: ";
        getline(cin, departmentName);
    }

    // Function to display complete information
    void displayInfo() {
        cout << "\n--- Department Information ---" << endl;
        cout << "University Name : " << universityName << endl;
        cout << "College Name    : " << collegeName << endl;
        cout << "Department Name : " << departmentName << endl;
    }
};

int main() {
    Department d1;

    // Accept details
    d1.setUniversity();
    d1.setCollege();
    d1.setDepartment();

    // Display details
    d1.displayInfo();

    return 0;
}

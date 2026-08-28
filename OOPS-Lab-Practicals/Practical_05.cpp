#include <iostream>
using namespace std;

class UserProfile {
private:
    string userName;
    int orders;
    bool active;

public:
    // Constructor
    UserProfile(string name, int ord) {
        userName = name;
        orders = ord;
        active = true;
    }

    // Unary minus operator to deactivate account
    void operator-() {
        active = false;
    }

    // Increment operator to increase number of orders
    void operator++() {
        orders++;
    }

    // Function to display user details
    void display() {
        cout << "\n--- User Profile Details ---" << endl;
        cout << "User Name: " << userName << endl;
        cout << "Orders Placed: " << orders << endl;

        if(active)
            cout << "Account Status: Active" << endl;
        else
            cout << "Account Status: Deactivated" << endl;
    }
};

int main() {
    // Object creation
    UserProfile user1("Vedant", 5);

    // Display original details
    user1.display();

    // Increase order count
    ++user1;

    cout << "\nAfter Increasing Orders:" << endl;
    user1.display();

    // Deactivate account
    -user1;

    cout << "\nAfter Deactivating Account:" << endl;
    user1.display();

    return 0;
}

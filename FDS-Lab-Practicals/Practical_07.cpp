#include <iostream>
using namespace std;

#define MAX 100

class Stack {
private:
    int stack[MAX];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if(top == MAX - 1) {
            cout << "Stack Overflow!" << endl;
        }
        else {
            top++;
            stack[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if(top == -1) {
            cout << "Stack Underflow!" << endl;
        }
        else {
            cout << "Popped Element: " << stack[top] << endl;
            top--;
        }
    }

    // Peek operation
    void peek() {
        if(top == -1) {
            cout << "Stack is empty." << endl;
        }
        else {
            cout << "Top Element: " << stack[top] << endl;
        }
    }

    // Display stack
    void display() {
        if(top == -1) {
            cout << "Stack is empty." << endl;
        }
        else {
            cout << "Stack Elements: ";

            for(int i = top; i >= 0; i--) {
                cout << stack[i] << " ";
            }

            cout << endl;
        }
    }

    // Decimal to Binary Conversion
    void decimalToBinary(int num) {

        while(num > 0) {
            push(num % 2);
            num = num / 2;
        }

        cout << "Binary Equivalent: ";

        while(top != -1) {
            cout << stack[top];
            top--;
        }

        cout << endl;
    }
};

int main() {

    Stack s;
    int choice, value, number;

    do {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Decimal to Binary" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Enter decimal number: ";
                cin >> number;
                s.decimalToBinary(number);
                break;

            case 6:
                cout << "Program Exited." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}

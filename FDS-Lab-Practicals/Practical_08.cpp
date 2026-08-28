#include <iostream>
using namespace std;

#define MAX 100

class Queue {
private:
    int queue[MAX];
    int front, rear;

public:
    // Constructor
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int value) {

        if(rear == MAX - 1) {
            cout << "Queue Overflow!" << endl;
        }
        else {

            if(front == -1) {
                front = 0;
            }

            rear++;
            queue[rear] = value;

            cout << value << " inserted into queue." << endl;
        }
    }

    // Dequeue operation
    void dequeue() {

        if(front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
        }
        else {
            cout << "Deleted Element: " << queue[front] << endl;
            front++;
        }
    }

    // Display queue
    void display() {

        if(front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
        }
        else {

            cout << "Queue Elements: ";

            for(int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }

            cout << endl;
        }
    }
};

int main() {

    Queue q;
    int choice, value;

    do {
        cout << "\n--- QUEUE MENU ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Program Exited." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}

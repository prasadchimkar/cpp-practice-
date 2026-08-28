#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {

    Node* newNode = new Node();
    newNode->data = value;

    if(head == NULL) {
        head = newNode;
        newNode->next = head;
    }
    else {

        Node* temp = head;

        while(temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }
}

void display() {

    if(head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;

    cout << "Circular Linked List: ";

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    while(temp != head);

    cout << "(back to head)" << endl;
}

int main() {

    insert(10);
    insert(20);
    insert(30);

    display();

    return 0;
}

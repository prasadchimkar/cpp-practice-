#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Create Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Insert Element" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter array elements: ";
                for(int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                break;

            case 2:
                cout << "Array Elements are: ";
                for(int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                cout << "Enter position to insert element: ";
                cin >> pos;

                cout << "Enter value: ";
                cin >> value;

                for(int i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                cout << "Element inserted successfully!" << endl;
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

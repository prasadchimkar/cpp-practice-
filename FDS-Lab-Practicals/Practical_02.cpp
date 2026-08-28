#include <iostream>
using namespace std;

int main() {
    int marks[100], n, choice;
    int total = 0, highest, lowest;
    float average;

    do {
        cout << "\n--- STUDENT PERFORMANCE MENU ---" << endl;
        cout << "1. Enter Student Marks" << endl;
        cout << "2. Display Marks" << endl;
        cout << "3. Find Average Marks" << endl;
        cout << "4. Find Highest and Lowest Marks" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter number of students: ";
                cin >> n;

                cout << "Enter marks: " << endl;
                for(int i = 0; i < n; i++) {
                    cin >> marks[i];
                }
                break;

            case 2:
                cout << "Student Marks are: ";
                for(int i = 0; i < n; i++) {
                    cout << marks[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                total = 0;

                for(int i = 0; i < n; i++) {
                    total += marks[i];
                }

                average = (float)total / n;

                cout << "Average Marks = " << average << endl;
                break;

            case 4:
                highest = lowest = marks[0];

                for(int i = 1; i < n; i++) {
                    if(marks[i] > highest)
                        highest = marks[i];

                    if(marks[i] < lowest)
                        lowest = marks[i];
                }

                cout << "Highest Marks = " << highest << endl;
                cout << "Lowest Marks = " << lowest << endl;
                break;

            case 5:
                cout << "Program Exited." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}

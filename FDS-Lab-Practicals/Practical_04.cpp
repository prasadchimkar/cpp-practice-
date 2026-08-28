#include <iostream>
using namespace std;

int main() {
    int n;
    float price[50], temp;

    cout << "Enter number of products: ";
    cin >> n;

    cout << "Enter product prices: ";
    for(int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {

            if(price[j] > price[j + 1]) {
                temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Product Prices:" << endl;

    for(int i = 0; i < n; i++) {
        cout << price[i] << " ";
    }

    return 0;
}

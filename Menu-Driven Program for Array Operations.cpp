#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100];
    int size = 0;   
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Search Element\n";
        cout << "4. Display Elements\n";
        cout << "5. Sort Array\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to insert: ";
            cin >> value;
            arr[size++] = value;
        } 
        else if (choice == 2) {
            cout << "Enter value to delete: ";
            cin >> value;
            bool found = false;
            for (int i = 0; i < size; i++) {
                if (arr[i] == value) {
                    for (int j = i; j < size - 1; j++)
                        arr[j] = arr[j + 1];
                    size--;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Value not found.\n";
        } 
        else if (choice == 3) {
            cout << "Enter value to search: ";
            cin >> value;
            bool found = false;
            for (int i = 0; i < size; i++) {
                if (arr[i] == value) {
                    found = true;
                    break;
                }
            }
            cout << (found ? "Found\n" : "Not Found\n");
        } 
        else if (choice == 4) {
            cout << "Array elements: ";
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
        } 
        else if (choice == 5) {
            sort(arr, arr + size);
            cout << "Array sorted.\n";
        }

    } while (choice != 6);

    return 0;
}

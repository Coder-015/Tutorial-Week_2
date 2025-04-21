#include <iostream>
using namespace std;

int main() {
    int n, choice;
    float marks[100];

    cout << "Enter number of students: ";
    cin >> n;

    do {
        cout << "\nMenu:\n1. Enter Marks\n2. Average\n3. Highest & Lowest\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter marks:\n";
            for (int i = 0; i < n; i++)
                cin >> marks[i];
        } 
        else if (choice == 2) {
            float sum = 0;
            for (int i = 0; i < n; i++)
                sum += marks[i];
            cout << "Average Marks: " << (sum / n) << endl;
        } 
        else if (choice == 3) {
            float high = marks[0], low = marks[0];
            for (int i = 1; i < n; i++) {
                if (marks[i] > high) high = marks[i];
                if (marks[i] < low) low = marks[i];
            }
            cout << "Highest: " << high << ", Lowest: " << low << endl;
        }

    } while (choice != 4);

    return 0;
}

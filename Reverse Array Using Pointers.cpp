#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
  
    int *start = arr, *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "\nReversed: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

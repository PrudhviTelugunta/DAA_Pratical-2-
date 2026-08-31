#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int position = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at position: " << position + 1;
    else
        cout << "Element not found";

    return 0;
}

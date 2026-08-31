#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int position = -1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            position = mid;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (position != -1)
        cout << "Element found at position: " << position + 1;
    else
        cout << "Element not found";

    return 0;
}

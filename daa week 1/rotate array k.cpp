#include <iostream>
using namespace std;

int main() {
    int arr[100], n, k;

    cout << "Enter number of elements in array: ";
    cin >> n;

    cout << "Enter the elements of array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of K (positions to rotate): ";
    cin >> k;

    k = k % n; 

    int temp[100];

    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    cout << "Array after rotation:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

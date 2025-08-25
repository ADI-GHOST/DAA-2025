#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 4, 0, 3, 7, 0, 2, 0, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int nonZero[100];
    int zero[100];
    int nzIndex = 0, zIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            nonZero[nzIndex++] = arr[i];
        } else {
            zero[zIndex++] = arr[i];
        }
    }

    for (int i = 0; i < nzIndex; i++) {
        arr[i] = nonZero[i];
    }
    for (int i = 0; i < zIndex; i++) {
        arr[nzIndex + i] = zero[i];
    }

    cout << "Array after moving zeros to the end:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
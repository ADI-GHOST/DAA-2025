#include <iostream>
using namespace std;

int main() {
    int arr[] = {63, 58, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < n - 1; i++) {
        int loc = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[loc]) {
                loc = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newArr[n];  
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "without duplicates ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}

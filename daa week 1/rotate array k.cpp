#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5, 6, 7}; 
    int n = 7;                           
    int k = 3;                            
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


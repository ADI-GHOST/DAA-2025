#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted numbers from 0 to " << n << " (one missing):\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int missing = n;

    for (int i = 0; i < n; i++) {
        if (arr[i] != i) {
            missing = i;
            break;
        }
    }

    cout << "Missing number is: " << missing << endl;

    return 0;
}

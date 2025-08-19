#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int key = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n - 1;
    bool found = false;

    while (l <= h) {
        int mid = (l + h) / 2;

        if (arr[mid] == key) {
            cout << "key position= " << mid + 1 << endl;
            found = true;
            break;
        } else if (arr[mid] < key) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    if (!found) {
        cout << "key not in array" << endl;
    }

    return 0;

}

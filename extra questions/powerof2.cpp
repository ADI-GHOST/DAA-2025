#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
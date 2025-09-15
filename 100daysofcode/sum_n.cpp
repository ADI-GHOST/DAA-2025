//Write a program to find and display the sum of the first n natural numbers.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        sum =sum +i;
    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    return 0;
}

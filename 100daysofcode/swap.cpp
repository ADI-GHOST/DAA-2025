//Write a program to swap two numbers using a third variable.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap a = " << a << ", b = " << b << endl;
    return 0;
}

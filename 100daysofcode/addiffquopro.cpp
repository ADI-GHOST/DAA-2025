//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0){
        return false;
    }
    else {
        return a/b;
    }
}

int main() {
    cout << "Sum: " << add(10, 2) << endl;
    cout << "Difference: " << subtract(10, 2) << endl;
    cout << "Product: " << multiply(10, 2) << endl;
    cout << "Quotient: " << divide(10, 2) << endl;

    cout << "Sum: " << add(7, 3) << endl;
    cout << "Difference: " << subtract(7, 3) << endl;
    cout << "Product: " << multiply(7, 3) << endl;
    cout << "Quotient: " << divide(7, 3) << endl;

    return 0;
}
//Write a program to calculate the area and circumference of a circle given its radius.
#include <iostream>
using namespace std;
int area(int radius) {
    return 3.14 * radius * radius;
}

int circumference(int radius) {
    return 2 * 3.14 * radius;
}

int main() {
    int radius;
    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area: " << area(radius) << endl;
    cout << "Circumference: " << circumference(radius) << endl;

    return 0;
}
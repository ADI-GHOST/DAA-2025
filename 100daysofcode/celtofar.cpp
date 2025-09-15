//Write a program to convert temperature from Celsius to Fahrenheit.


#include <iostream>
using namespace std;

int main() {
    int celsius;
    cin >> celsius;
    int fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Fahrenheit: " << fahrenheit << endl;
    return 0;
}

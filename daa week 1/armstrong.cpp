#include <iostream>
using namespace std;

int main() {
    int num, original, rem, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    original = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        rem = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++)
            power *= rem;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number" << endl;
    else
        cout << original << " is not an Armstrong number" << endl;

    return 0;
}
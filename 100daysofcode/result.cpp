#include <iostream>
using namespace std;

int main() {
    int percentage;
    cin >> percentage;

    if (percentage >= 90 && percentage <= 100)
        cout << "Grade A";
    else if (percentage >= 80 && percentage <= 89)
        cout << "Grade B";
    else if (percentage >= 70 && percentage <= 79)
        cout << "Grade C";
    else if (percentage >= 60 && percentage <= 69)
        cout << "Grade D";
    else if (percentage >= 0 && percentage < 60)
        cout << "Grade F";
    else
        cout << "Invalid percentage";

    return 0;
}

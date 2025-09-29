#include <iostream>
#include <cmath>
using namespace std;

double simpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

double compoundInterest(double principal, double rate, double time) {
    return principal * pow((1 + rate / 100.0), time) - principal;
}

int main() {
    double P, R, T;

    cout << "Enter Principal amount: ";
    cin >> P;
    cout << "Enter Rate of interest (%): ";
    cin >> R;
    cout << "Enter Time (in years): ";
    cin >> T;

    double SI = simpleInterest(P, R, T);
    double CI = compoundInterest(P, R, T);

    cout << "\nSimple Interest = " << SI << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}

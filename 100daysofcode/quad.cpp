#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal: " << root;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex: " << realPart << " + " << imagPart << "i and " << realPart << " - " << imagPart << "i";
    }

    return 0;
}

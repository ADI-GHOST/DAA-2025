#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    cout << "Enter time in seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Time = " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}

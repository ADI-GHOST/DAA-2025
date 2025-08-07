#include <iostream>
using namespace std;

int main() {
    char input[] = "my name is aditya";
    int i = 0, j = 0;

    while (input[i] != '\0') {
        if (input[i] != ' ') {
            input[j] = input[i];
            j++;
        }
        i++;
    }

    input[j] = '\0';

    int len = 0;
    while (input[len] != '\0') {
        len++;
    }

    cout << len << endl;


    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string low = "abcdefghijklmnopqrstuvwxyz";
    string str = "my name is aditya anand";

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            if (str[i] == low[j]) {
                char temp = str[i];
                str[i] = up[j];
                up[j] = temp; 
                break;
            }
        }
    }

    cout << "Upper=" << str << endl;

    return 0;
}

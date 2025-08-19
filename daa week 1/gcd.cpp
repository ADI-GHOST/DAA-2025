#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int gcd;
    cout<<"Enter two numbers";
    cin>>a>> b;

    int x;
    if (a<b) {
        x=a;
    } else {
        x=b;
    }

    for (int i=1;i<=x;i++) {
        if (a%i==0&&b%i==0) {
            gcd = i;
        }
    }

    cout << "gcd" << gcd << endl;
    return 0;
}



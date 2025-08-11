#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int hcf;
    cout<<"Enter two numbers";
    cin>>a>> b;

    int minValue;
    if (a<b) {
        minValue=a;
    } else {
        minValue=b;
    }

    for (int i=1;i<=minValue;i++) {
        if (a%i==0&&b%i==0) {
            hcf = i;
        }
    }

    cout << "HCF=" << hcf << endl;
    return 0;
}

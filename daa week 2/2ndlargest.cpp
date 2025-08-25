#include <iostream>
using namespace std;

void bubble(int arr[],int n){
        for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(){
    int arr[10]={1,5,8,9,6,5,0,2,7,3};
    int temp[10];
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }

    bubble(temp,n);
    cout<<"2nd largest element is "<<temp[n-2];

}
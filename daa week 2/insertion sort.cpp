#include <iostream>
using namespace std;

int main(){
    int arr[]={3,2,7,1,8,0};
    int key;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =1;i<n;i++){
        key = arr[i];
        int j =i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1] =key;
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,2,5,9,7,5,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at"<<i+1<<endl;
            break;
            
        }
       

    }
}
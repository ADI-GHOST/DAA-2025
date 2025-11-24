#include <iostream>
using namespace std;

int findp(int p[], int x){
    while(p[x] != x) x = p[x];
    return x;
}

int main(){
    int n = 4;
    int e = 5;

    int a[5] = {0,0,0,1,2};
    int b[5] = {1,2,3,3,3};
    int c[5] = {10,6,5,15,4};

    int p[10];
    for(int i=0;i<n;i++) p[i]=i;

    for(int i=0;i<e;i++){
        for(int j=0;j<e-1;j++){
            if(c[j] > c[j+1]){
                int x=a[j]; a[j]=a[j+1]; a[j+1]=x;
                int y=b[j]; b[j]=b[j+1]; b[j+1]=y;
                int z=c[j]; c[j]=c[j+1]; c[j+1]=z;
            }
        }
    }

    int total = 0;

    for(int i=0;i<e;i++){
        int u=a[i];
        int v=b[i];
        int w=c[i];

        int pu=findp(p,u);
        int pv=findp(p,v);

        if(pu!=pv){
            cout<<u<<" - "<<v<<" : "<<w<<"\n";
            total += w;
            p[pv]=pu;
        }
    }

    cout<<"Total Weight = "<<total;
    return 0;
}

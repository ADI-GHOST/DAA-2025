#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <climits>


using namespace std;

int n;
vector<vector<int>> g;
vector<int> color, bestColor;
int best = INT_MAX;

int satDegree(int v, const vector<int>& c) {
    unordered_set<int> s;
    for (int u=0; u<n; u++) if (g[v][u] && c[u]!=0) s.insert(c[u]);
    return s.size();
}

int chooseVertex(const vector<int>& c) {
    int v=-1, md=-1, md2=-1;
    for(int i=0;i<n;i++){
        if(c[i]==0){
            int sd=satDegree(i,c);
            int deg=0;
            for(int j=0;j<n;j++) if(g[i][j]) deg++;
            if(sd>md || (sd==md && deg>md2)){
                md=sd; md2=deg; v=i;
            }
        }
    }
    return v;
}

bool ok(int v,int col,const vector<int>& c){
    for(int u=0;u<n;u++) if(g[v][u] && c[u]==col) return false;
    return true;
}

void solveRec(int used) {
    if(used>=best) return;
    int v = chooseVertex(color);
    if(v==-1){
        best=used;
        bestColor=color;
        return;
    }
    for(int col=1; col<=used; col++){
        if(ok(v,col,color)){
            color[v]=col;
            solveRec(used);
            color[v]=0;
        }
    }
    if(used+1<best){
        color[v]=used+1;
        solveRec(used+1);
        color[v]=0;
    }
}

int main(){
    n = 4;
    g = {
        {0,1,1,1},
        {1,0,1,1},
        {1,1,0,1},
        {1,1,1,0}
    };

    color.assign(n,0);
    bestColor.assign(n,0);

    solveRec(0);

    cout<<best<<"\n";
    for(int i=0;i<n;i++) cout<<bestColor[i]<<" ";
    cout<<"\n";
}

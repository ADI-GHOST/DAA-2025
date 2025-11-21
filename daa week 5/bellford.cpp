#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 5;
    const int INF = 1000000000;

    int adj[5][5] = {
        {0, -1, 4, INF, INF},
        {INF, 0, 3, 2, 2},
        {INF, INF, 0, INF, INF},
        {INF, 1, 5, 0, INF},
        {INF, INF, INF, -3, 0}
    };

    int u[10000], v[10000], w[10000];
    int m = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj[i][j] != 0 && adj[i][j] != INF) {
                u[m] = i;
                v[m] = j;
                w[m] = adj[i][j];
                m++;
            }
        }
    }

    int src = 0;

    long long dist[10000];
    for (int i = 0; i < n; i++) dist[i] = LLONG_MAX;
    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[u[j]] != LLONG_MAX && dist[u[j]] + w[j] < dist[v[j]]) {
                dist[v[j]] = dist[u[j]] + w[j];
            }
        }
    }

    for (int j = 0; j < m; j++) {
        if (dist[u[j]] != LLONG_MAX && dist[u[j]] + w[j] < dist[v[j]]) {
            cout << "Negative weight cycle detected\n";
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (dist[i] == LLONG_MAX) cout << "INF\n";
        else cout << dist[i] << "\n";
    }

    return 0;
}

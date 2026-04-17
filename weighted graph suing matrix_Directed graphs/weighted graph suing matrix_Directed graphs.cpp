#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    ifstream fin("g1.txt");
    fin >> n >> m;

    int **g = new int*[n];
    for (int i = 0; i < n; i++) {
        g[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 99999;
        }
    }

    int u, v, w;
    for (int i = 0; i < m; i++) {
        fin >> u >> v >> w;
        g[u][v] = w;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 99999)
                cout << "INF ";
            else
                cout << g[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

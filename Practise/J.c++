#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2005;

vector<int> adj[MAXN];
int groups[MAXN];

int dfs(int u) {
    int maxGroup = 0;
    for (int v : adj[u]) {
        maxGroup = max(maxGroup, dfs(v));
    }
    return groups[u] = maxGroup + 1;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int manager;
        cin >> manager;
        if (manager != -1) {
            adj[manager].push_back(i);
        }
    }

    int result = 0;
    for (int i = 1; i <= n; ++i) {
        if (groups[i] == 0) {
            result = max(result, dfs(i));
        }
    }

    cout << result << endl;

    return 0;
}

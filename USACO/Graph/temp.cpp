 
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj; // Define the adjacency list

void dba(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int child : adj[i]) {
            cout << child << " ";
        }
        cout << endl;
    }
}

void read(string name = "") {
    if (name.length()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

void reset(int n) {
    vector<int> vis(n + 1, 0); // Initialize the vis array
    adj.clear(); // Clear the adjacency list
}


void build(int m) {
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}
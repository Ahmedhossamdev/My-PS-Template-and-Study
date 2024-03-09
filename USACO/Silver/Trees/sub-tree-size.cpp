#include <bits/stdc++.h>
using namespace std;

#define sum_N(n) (n * (n + 1) / 2)
#define sumL_R(L, R) (R * (R + 1) / 2) - ((L - 1) * ((L - 1) + 1) / 2)
#define sz(v) ((int)((v).size()))
#define mmset(k, y) memset(k, y, sizeof(k))
#define R cin >>
#define fs(n) fixed << setprecision(n)
#define asort(a) sort(a, a + n)
#define vi vector<int>
#define ff first
#define ss second
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define lli long long int
#define sp ' '
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define allr(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define sy cout << "YES\n";
#define sm cout << "-1\n";
#define sn cout << "NO\n";
#define so cout << "0\n";

const int N = 2e5 + 5;

vector<int> adj[N];
int subTreeSize[N];

void dfs(int node, int par)
{

    subTreeSize[node] = 1;

    for (auto child : adj[node])
    {
        if (child != par)
        {
            dfs(child, node);
            subTreeSize[node] += subTreeSize[child];
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1, 0);

    for (int i = 1; i <= n; i++)
    {
        cout << subTreeSize[i] << ' ';
    }
}

int main()
{

    fast
    solve();
    return 0;
}

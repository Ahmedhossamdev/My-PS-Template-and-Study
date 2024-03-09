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
#define ll long long
#define pb push_back
#define allr(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define sy cout << "YES\n";
#define sm cout << "-1\n";
#define sn cout << "NO\n";
#define so cout << "0\n";

const int N = 1e5 + 5;
int n, m;

void fast(string name = "")

{

    cin.tie(0)->sync_with_stdio(0);

    if (name.size() > 0)

    {

        freopen((name + ".in").c_str(), "r", stdin);

        freopen((name + ".out").c_str(), "w", stdout);
    }
}
struct DSU
{
    int parent[N];
    int groupSize[N];
    // defualt Constructor

    int numberOfComponents = n;
    int sizeOfLargestComponent = 1;

    DSU()
    {

        for (int i = 0; i < N; i++)
        {
            parent[i] = i;
            groupSize[i] = 1;
        }
    }

    int findLeader(int i)
    {
        if (parent[i] == i)
        {
            return i;
        }

        // With out path compression
        // return FindLeader(paren[i]);

        // With path compression
        return parent[i] = findLeader(parent[i]);
    }

    bool sameGroup(int x, int y)
    {
        int leader1 = findLeader(x);
        int leader2 = findLeader(y);

        return leader1 == leader2;
    }

    void mergeGroups(int x, int y)
    {

        int leader1 = findLeader(x);
        int leader2 = findLeader(y);

        // If the are in the same component
        if (leader1 == leader2)
        {
            return;
        }

        numberOfComponents--;

        if (groupSize[leader1] > groupSize[leader2])
        {
            parent[leader2] = leader1;
            groupSize[leader1] += groupSize[leader2];
            sizeOfLargestComponent = max(sizeOfLargestComponent, groupSize[leader1]);
        }
        else
        {
            parent[leader1] = leader2;
            groupSize[leader2] += groupSize[leader1];
            sizeOfLargestComponent = max(sizeOfLargestComponent, groupSize[leader2]);
        }
    }

    int getSize(int x)
    {
        int leader = findLeader(x);
        return groupSize[leader];
    }
    int getNumberOfComponents()
    {
        return numberOfComponents;
    }
    int getLargestComponentSize()
    {
        return sizeOfLargestComponent;
    }
};

void solve()
{
}

int main()
{

    fast("");

    solve();
    return 0;
}

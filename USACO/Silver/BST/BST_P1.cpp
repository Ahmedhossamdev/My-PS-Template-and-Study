
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

/* Binary Search Tree */

// All the nodes that in the right will be greater than the root node
// All the nodes that in the left will be smaller than the root node

// Insertion in BST Adding node in BST

// 50 76 21 4 32 64 15 52 14 100 83 2 3 70 87 80

// Deletion in BST
struct node
{
    int data;
    node *left;
    node *right;
};

void solve()
{
}

int main()
{

    fast
        tc
        solve();
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
#define ordered_set                            \
  tree<int, null_type, less<int>, rb_tree_tag, \
       tree_order_statistics_node_update>
#define ordered_multiset                             \
  tree<int, null_type, less_equal<int>, rb_tree_tag, \
       tree_order_statistics_node_update>
#define ordered_multiset2                                            \
  tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, \
       tree_order_statistics_node_update>

#define sp ' '
#define speed              \
  ios::sync_with_stdio(0); \
  cin.tie(0);
#define ll long long
#define ll1 unsigned long long
#define ld long double
#define pb push_back
#define ifc(b, s1, otherwise) \
  (b) ? cout << s1 << endl : cout << otherwise << endl
#define fs(n) fixed << setprecision(n)
#define asort(a) sort(a, a + n)
#define vi vector<int>
#define vld vector<ld>
#define vd vector<double>
#define qu queue<int>
#define de deque<int>
#define pqi priority_queue<int>
#define pql priority_queue<long long>
#define dl deque<long long>
#define ql queue<long long>
#define vl vector<long long>
#define vc vector<char>
#define allr(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define dsort(a) sort(a, a + n, greater<int>())
#define cin_set(s) \
  for (int i = 0, entry; i < n and cin >> entry; i++) s.emplace(entry);
#define cout_set(s) \
  for (auto &i : s) cout << i << " ";
#define cin_deque(d) \
  for (auto &i : d) cin >> i;
#define cout_deque(d)                 \
  for (auto &i : d) cout << i << " "; \
  cout << '\n';
#define cout_map(mp) \
  for (auto &[f, s] : mp) cout << f << "  " << s << "\n";
#define cout_stack(s)       \
  while (!s.empty()) {      \
    cout << s.top() << " "; \
    s.pop();                \
  }                         \
  cout << '\n';
#define clr(v, d) memset(v, d, sizeof(v))
#define ff first
#define ss second
#define tc  \
  int t;    \
  cin >> t; \
  while (t--)
#define sy cout << "YES\n";
#define sm cout << "-1\n";
#define sn cout << "NO\n";
#define so cout << "0\n";
#define mt make_pair
#define Time \
  cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " secs\n";
#define sum_N(n) (n * (n + 1) / 2)
#define sumL_R(L, R) (R * (R + 1) / 2) - ((L - 1) * ((L - 1) + 1) / 2)
#define sz(v) ((int)((v).size()))
#define rep1(i, m, n) for (int i = m; i <= n; i++)
#define CC(x) cout << (x) << endl
#define fr(i, x, y) for (ll i = (ll)x; i < (ll)y; ++i)
#define fr1(i, x, y) for (ll i = (ll)x; i <= (ll)y; ++i)
#define fra(x) for (auto &i : x)
#define mmset(k, y) memset(k, y, sizeof(k))
#define R cin >>
using namespace std;

int minCoins(vector<int> &coins, int target) {
  vector<int> dp(target + 1, INT_MAX);

  dp[0] = 0;
  for (int i = 1; i <= target; i++) {
    for (int j = 0; j < coins.size(); j++) {
      if (coins[j] <= i && dp[i - coins[j]] + 1 < dp[i]) {
        dp[i] = dp[i - coins[j]] + 1;
      }
    }
  }

  return dp[target];
}

void solve() {
  int n, s;
  cin >> n >> s;

  vector<int> coins(n);

  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }

  cout << minCoins(coins, s) << endl;
}

int main() {
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}

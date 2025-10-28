#include <bits/stdc++.h>
using namespace std;

// --- Fast I/O ---
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define ll long long
#define pb push_back

// --- Solve function ---
void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    string t;
    cin >> t;

    unordered_map<char, int> hash;

    for (char it : s)
        hash[it]++;

    for (char it : t)
        hash[it]--;

    for (auto it : hash)
    {
        if (it.second != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;

    // fast_io;
    // solve();   // only one test case
    // return 0;
}

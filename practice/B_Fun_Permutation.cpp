#include <bits/stdc++.h>
using namespace std;

// --- Fast I/O ---
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// --- Solve function ---


    void solve()
    {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        for (int i = 0; i < n; i++)
        {
            q[i] = n + 1 - p[i];
            cout << q[i] << " ";
        }
        cout << endl;
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
}

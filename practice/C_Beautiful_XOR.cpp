#include <bits/stdc++.h>
using namespace std;

// --- Fast I/O ---
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// --- Solve function ---
void solve()
{

    int a;
    cin >> a;

    int b;
    cin >> b;

    int x = -1;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if (b > a)
    {
        cout << -1 << endl;
        return;
    }

    else
    {
        x = a ^ b;

        cout << 1 << endl;

        cout << x << endl;
    }
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

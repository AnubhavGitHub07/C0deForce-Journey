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

    int count = 0;

    vector<vector<int>> mat(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == 1)
            {
                sum++;
            }
        }

        if (sum >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    // fast_io;

    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     solve();
    // }
    // return 0;

    fast_io;
    solve();   // only one test case
    return 0;
}

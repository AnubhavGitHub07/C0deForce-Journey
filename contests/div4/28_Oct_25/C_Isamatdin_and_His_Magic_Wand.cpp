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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count_1 = 0;
    int count_2 = 0;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count_1++;
        }

        else
        {
            count_2++;
        }
    }

    if (count_1 == n || count_2 == n)
    {
        for (auto &it : a)
        {
            cout << it << " ";
        }

        cout<<endl;
    }

    else
    {

        sort(a.begin(), a.end());
        for (auto &it : a)
        {

            cout << it << " ";
        }

        cout<<endl;
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

    // fast_io;
    // solve();   // only one test case
    // return 0;
}

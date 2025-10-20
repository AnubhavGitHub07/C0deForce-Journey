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

    int count = 0;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    set<int> s;

    s.insert(nums.begin(), nums.end());

    count = s.size();

    int ans = 2 * count - 1;

    cout << ans << endl;
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

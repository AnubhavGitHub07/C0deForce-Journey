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
    int m;
    cin >> n >> m;

    vector<pair<int, int>> test(n);

    for (int i = 0; i < n; i++)
    {
        cin >> test[i].first >> test[i].second;
    }

    int points = 0;
    int prev_time = 0;
    int prev_side = 0;

    for (auto [t, side] : test)
    {
        int delta = t - prev_time;
        int parity_needed = prev_side ^ side;

        if(delta % 2 == parity_needed){
            points+=delta;
        }

        else{
            points+=delta-1;
        }

        prev_time = t;
        prev_side = side;
    }

    points+=(m-prev_time);

    cout<<points<<endl;

    
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

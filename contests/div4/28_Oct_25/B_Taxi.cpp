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
    int n; // no of groups
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count1 = 0 , count2 = 0 , count3 = 0 , count4 = 0;
    for ( auto &it : a){
        if( it == 1) count1++;
        else if ( it == 2) count2++;
        else if ( it == 3) count3++;
        else count4++;
    }

    int taxi = count4;

    taxi+= count3;
    count1 = max(0,count1 - count3);

    taxi += count2/2;


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

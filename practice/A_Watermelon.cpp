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
    cin>>n;

    if(n>2 && n%2 == 0){
        cout<< "YES" <<endl;
    }

    else{
        cout<< "NO" <<endl;
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

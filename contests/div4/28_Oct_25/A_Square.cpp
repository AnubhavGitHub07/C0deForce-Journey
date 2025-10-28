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
    int a , b ,c , d;
    cin>>a>>b>>c>>d;

    if(a == b && b == c && c == d ){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
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

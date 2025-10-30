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
 
    int n, m;
    cin >> n >> m;
 
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    
    bool flag = false;
    for(int i = m-1 ; i > 0 ; i--){
        if(a[i] == 1){
            flag = true;
            break;
        }
    }
 
    if(flag != true){
        cout<<n-a[m-1]+1<<endl;
    }
 
    else{
        cout<<1<<endl;
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
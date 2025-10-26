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

    vector<int> nums(n);
    for(auto &it : nums){
        cin>>it;
    }

    vector<bool> hash(102,false);

    for(auto num : nums){
     if(num<=102 ) {
        hash[num] = true;
     }
    }

    int mex =0 ;

    while(hash[mex]){
        mex++;
    }

    cout<<mex<<endl;



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

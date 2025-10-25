#include <bits/stdc++.h>
using namespace std;

// --- Fast I/O ---
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// --- Solve function ---
void solve()
{

    int n, k;
    cin >> n >> k;

    int count = 0;

    vector<int> nums(n);
    for(int i = 0 ; i<n ; i++){
        cin>>nums[i];
    }

    vector<int> hash(n + 1, 0);

    for(int i = 0 ; i<n; i++){
       if(nums[i] < k){
        hash[nums[i]]++;
       }
    }

    int missing = 0;

    for(int i = 0 ; i<k ; i++){
        if(hash[i] == 0){
            missing++;
        }
    }

    for(int i = 0 ; i<n ; i++){
        if(nums[i] == k){
            count++;
        }
    }

    cout<<max(missing,count)<<endl;
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

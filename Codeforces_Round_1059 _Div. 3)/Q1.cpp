
#include <bits/stdc++.h>
using namespace std;

// --- Fast I/O ---
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// --- Solve function ---
void solve()
{

    int sum = 0;

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0 ; i <n ; i++){
        cin>>nums[i];
    }

    int maximum_average = 0;

    maximum_average = *max_element(nums.begin() , nums.end());

    for(int i = 0 ; i<n ; i++){

        sum+=nums[i];
    }
    
    if(sum/n > maximum_average ){
        maximum_average = sum/n;
        cout<<maximum_average<<endl;
    }

    else {
        cout<<maximum_average<<endl;;
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

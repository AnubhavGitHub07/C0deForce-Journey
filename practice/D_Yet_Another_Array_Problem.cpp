#include <bits/stdc++.h>
using namespace std;

// --- Fast I/O ---
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define ll long long
#define pb push_back

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll r = a % b;
        a = b;
        b = r;
    }

    return a;
}

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
// --- Solve function ---
void solve()
{

    int n;
    cin >> n;

    vector<int> nums(n);

    for (auto &it : nums)
    {
        cin >> it;
    }

   ll g = nums[0];

   for(int i = 0 ; i<n ; i++){
        g = gcd(g , nums[i]);
   }

   if(g==1){
    cout<<2<<endl;
    return;
   }

for(auto &it : primes){
    if(g%it !=0){
        cout<<it<<endl;
        return;
    }
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

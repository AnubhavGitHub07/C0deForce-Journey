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
    int count_1 = 0;
    int ans = -1;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];

    }

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }

            else if (nums[i] == -1){
                count_1++;
            }

           
        }

         if(count_1 % 2 != 0){
                count+=2;
            }

            ans = count;
    

    cout<<ans<<endl;
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

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

    int n , t;
    cin>>n>>t;

    string s;
    cin>>s;

    

    while(t--){
        for(int i = 0 ; i<n-1 ; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i] , s[i+1]);
                i++;
            }
        }
    }

    cout<<s;


    
}

int main()
{
    // fast_io;

    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     solve();
    // }
    // return 0;

     fast_io;
     solve();   // only one test case
     return 0;
}

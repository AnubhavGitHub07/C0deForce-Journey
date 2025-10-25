#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int run = 0;
        bool impossible = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                run++;
                if (run >= k)
                {
                    impossible = true;
                    break;
                }
            }
            else
            {
                run = 0;
            }
        }

        if (impossible)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        vector<int> p(n);
        vector<int> onesIdx, zerosIdx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                onesIdx.push_back(i);
            }
            else
            {
                zerosIdx.push_back(i);
            }
        }

        int cur = 1;

        for (int idx : onesIdx)
        {
            p[idx] = cur++;
        }

        for (int idx : zerosIdx)
        {
            p[idx] = cur++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << (i + 1 < n ? ' ' : '\n');
        }
    }

    return 0;
}

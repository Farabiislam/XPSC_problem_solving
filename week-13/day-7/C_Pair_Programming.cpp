#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v1, v2;
        vector<int> ans;

        int k, n, m, i;
        cin >> k >> n >> m;

        int a, b, p1 = 0, p2 = 0;

        for (i = 1; i <= n; i++)
        {
            cin >> a;
            v1.push_back(a);
        }

        for (i = 1; i <= m; i++)
        {
            cin >> b;
            v2.push_back(b);
        }

        int flg = 0, line = k;

        while (n > p1 || m > p2)
        { 
            if (v1[p1] == 0 && p1 < n)
            {
                ans.push_back(0);
                p1++;
                line++;
            }

            else if (v2[p2] == 0 && p2 < m)
            {
                ans.push_back(0);
                p2++;
                line++;
            }

            else if (v1[p1] <= line && v1[p1] != 0 && p1 < n)
            {
                ans.push_back(v1[p1]);
                p1++;
            }

            else if (v2[p2] <= line and v2[p2] != 0 and p2 < m)
            {
                ans.push_back(v2[p2]);
                p2++;
            }

            else
            {
                flg = 1;
                break;
            }
        }

        if (flg)
            cout << "-1" << "\n";
        else
        {
            for (i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << "\n";
        }
    }
    
    
    
    return 0;
}
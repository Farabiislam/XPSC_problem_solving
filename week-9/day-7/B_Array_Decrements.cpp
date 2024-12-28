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
        int n;
        cin >> n;
        vector<int> ar(n+1), br(n+1);

        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n; i++)
            cin >> br[i];
        int mx = 0;
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] < br[i])
                ans = 1;
            else
            {
                if (br[i] == 0)
                {
                    mx = max(mx, ar[i]);
                }
                else
                {
                    int dif = ar[i] - br[i];
                    mp[dif]++;
                }
            }
        } 
   
        int x = -1;
        for (auto it : mp)
        {
            x = it.first;
        }
        if (mp.size() > 1)
            ans = 1;
        if (x != -1 && mx > x)
            ans = 1;

        if (ans == 1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";;
    }

    return 0;
}
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
        int x;
        cin >> x;
        int a = 1 << __lg(x);
        int b = 0, ans = 1;
        bool check = false;
        for (int i = __lg(x) - 1; i >= 0; i--)
        {
            if ((x >> i) & 1)
            {
                b = b | (1 << i);
                check = true;
            }
            else
            {
                if (check)
                    ans = ans * 2;
            }
        }
        
        cout << ans << endl;
    }
    
}
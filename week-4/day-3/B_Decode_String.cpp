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
        string s;
        cin >> s;
        int i = n - 1;
        string ans;
        while (i >= 0)
        {
            if (s[i] != '0')
            {
                int c = s[i] - '1';
                ans += char('a' + c);
                i--;
            }
            else
            {
                int num = stoi(s.substr(i - 2, 2)) - 1;
                ans += char('a' + num);
                i -= 3;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
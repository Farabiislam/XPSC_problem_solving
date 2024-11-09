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
        char ch;
        cin >> ch;
        string s; 
        cin >> s;
        s += s;
        int max = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ch)
            {
                cnt = 0;
                while (s[i] != 'g' && i < s.size())
                {
                    cnt++;
                    i++;
                }
                if (cnt > max)
                    max = cnt;
            }
        }
        cout << max<<"\n";
    }

    return 0; 
}
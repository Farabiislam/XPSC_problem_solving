#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        string s, c;
        cin >> n >> m;
        cin >> s;
        vector<int> a(m);
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }

        cin >> c;
        sort(c.begin(), c.end());
        int k = 0;
        for (auto e : st)
        {
            s[e - 1] = c[k];
            k++;
        }
        cout << s << "\n";
    }

    return 0;
}
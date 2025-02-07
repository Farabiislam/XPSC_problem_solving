#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &e : v)
    {

        cin >> e;
    }

    map<int, int> frq;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            frq[v[i] + v[j]]++;
        }
    }

    int mx = 0;

    for (auto e : frq)
    {

        mx = max(mx, e.second);
        }
    cout << mx << "\n";

    return 0;
}
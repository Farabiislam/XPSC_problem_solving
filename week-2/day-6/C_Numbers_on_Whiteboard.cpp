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
        vector<int> v;
        vector<pair<int, int>> p;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        for (int i = 1; i <= n - 1; i++)
        {
            int x, y;
            x = v.back();
            v.pop_back();
            y = v.back();
            v.pop_back();
            p.push_back({x, y});
            v.push_back(ceil(float(x + y) / 2));
        }
        cout << "2" << endl;
        for (auto [x, y] : p)
        {
            cout << x << " " << y << "\n";
        }
    }

    return 0;
}

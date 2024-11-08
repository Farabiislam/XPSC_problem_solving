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
        vector<int> v(n);
        for (int &e : v)
        {
            cin >> e;
        }
        priority_queue<int, vector<int>> pq;
        long long pow = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (!pq.empty())
                {
                    pow += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout << pow << "\n";
    }

    return 0;
}
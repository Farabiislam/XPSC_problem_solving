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
        for (int &it : v)
        {
            cin >> it;
        }
        priority_queue<int, vector<int>> pq;
        long long power = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (!pq.empty())
                {
                    power += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout << power << endl;
    }

    return 0;
}
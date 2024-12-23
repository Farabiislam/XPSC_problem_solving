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
        int n;
        cin >> n;

        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long OR = v[0];
        long long AND = v[0];

        for (int i = 1; i < n; i++)
        {
            OR = (OR | v[i]);
        }
        for (int i = 1; i < n; i++)
        {
            AND = (AND & v[i]);
        }

        cout << abs(AND - OR) << "\n";
    }
    
    return 0;
}
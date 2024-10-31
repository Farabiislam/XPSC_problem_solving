#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, a;
     map<int, int> v;
     cin >> n;

     for (int i = 0; i < n; i++)
     {
         cin >> a;
         v[a]++;
     }

     int maxFrequency = 0;
     for (auto [x, y] : v)
     {
         maxFrequency = max(maxFrequency, y);
     }

     cout << maxFrequency << "\n";

     return 0;
}
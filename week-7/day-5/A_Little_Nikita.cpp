#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
  
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n >= m && (n - m) % 2 == 0)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
}
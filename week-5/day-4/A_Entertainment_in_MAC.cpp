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

        string temp = s;

        reverse(temp.begin(), temp.end());

        cout << min(s, temp + s) << "\n";
    }

    return 0;
}
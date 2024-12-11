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
        string str;
        cin >> str;
        string s1, s2;

        for (int i = 0; i < str.size(); i++){

            s1 += "()";
        }
        for (int i = 0; i < str.size(); i++){

            s2 += '(';
        }
        for (int i = 0; i < str.size(); i++){

            s2 += ')';
        }

        if (s1.find(str) == -1)
        {
            cout << "YES" << "\n";
            cout << s1 << "\n";
        }
        else if (s2.find(str) == -1)
        {
            cout << "YES" << "\n";
            cout << s2 << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> stk;
    int turns = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (!stk.empty() && stk.top() == s[i])
        {
            stk.pop();
            turns++;
        }
        else
        {
            stk.push(s[i]);
        }
    }

    if (turns % 2 == 1)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}

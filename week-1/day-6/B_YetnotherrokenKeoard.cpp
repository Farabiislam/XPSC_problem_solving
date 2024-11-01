#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        stack<int> cap,sm;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'b' && s[i] >= 'a' && s[i] <= 'z')
            {
                sm.push(i);
            }
            if (s[i] != 'B' && s[i] >= 'A' && s[i] <= 'Z'){
                cap.push(i);
            }
            if (s[i] == 'B' && !cap.empty())
            {
                s[cap.top()] = '$';
                cap.pop();
            }
            if (s[i] == 'b' && !sm.empty())
            {
                s[sm.top()] = '$';
                sm.pop();
            }
        }
        for (char ch : s)
            if (ch != '$' && ch != 'b' && ch != 'B')
                cout << ch;
        cout << "\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;
     cin >>t;

     while (t--)
     {
         string s;
         cin >> s;

         bool f = false;
         for (int i = 0; i <= s.size(); i++)
         {
             if (i > 0 && !f)
             {
                 if (i == s.size() || s[i] == s[i - 1])
                 {
                     if (s[i - 1] == 'a')
                         cout << 'b';
                     else
                         cout << 'a';
                     f = true;
                 }
             }

             if (i < s.size())
             {
                 cout << s[i];
             }
         }

         cout << '\n';
     }

    return 0;
}
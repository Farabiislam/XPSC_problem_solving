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
          string s , t;
          cin >> s >> t;

           replace(s.begin(),s.end(),'G','B');
           replace(t.begin(),t.end(),'G','B');

        (s == t) ? cout << "YES" << "\n" : cout << "NO" << "\n";
      }
      
    return 0;
}
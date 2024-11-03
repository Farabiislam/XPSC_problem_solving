#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
      string s,t;
      cin >> s;
      cin >> t;
      int c = 0;
      for (int i = 0; i < s.size(); i++)
      {
            if(s[i] == t[i]){
                continue;
            }
            else{
                c++;
            }
         
      }
      cout << c << "\n" ;
    
    
    return 0;
}
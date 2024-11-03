#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
       int n,x;
       cin >> n >> x;
       vector<int>v(n);

       for (auto &e : v)
       {
           cin >> e;
       }
       
       for (auto it : v)
       {
            if(it != x ){
                cout << it << " ";
            }
       }

    return 0;
}